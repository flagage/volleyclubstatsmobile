#include "accountdetail.h"
#include "ui_accountdetail.h"

AccountDetail::AccountDetail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountDetail)
{
    ui->setupUi(this);
    this->Init();
    this->Connect();

}

AccountDetail::~AccountDetail()
{
    delete ui;
}

void AccountDetail::Init()
{
    _text="";
#ifndef _WIN32_WCE
    // How long can the accounts query take?
    setCursor(Qt::BusyCursor);
#endif

    // Find the list of available accounts and add them to combo box
    foreach (const QMessageAccountId &id, manager.queryAccounts()) {
        QMessageAccount account(id);

        // What is the most capable message type supported by this account?
        QMessage::Type type(QMessage::NoType);
        if (account.messageTypes() & QMessage::Email) {
            type = QMessage::Email;
        } else if (account.messageTypes() & QMessage::Mms) {
            type = QMessage::Mms;
        } else if (account.messageTypes() & QMessage::Sms) {
            type = QMessage::Sms;
        }

        if (type != QMessage::NoType) {
            QString name(account.name());
            _accountDetails.insert(name, qMakePair(type, account.id()));
            ui->comboBox->addItem(name);
        }
    }

    if (_accountDetails.isEmpty()) {
        QMessageBox::warning(0, tr("Cannot send"), tr("No accounts are available to send with!"));
        QCoreApplication::instance()->quit();
    } else {
         ui->comboBox->setCurrentIndex(0);
    }

#ifndef _WIN32_WCE
    setCursor(Qt::ArrowCursor);
#endif
}

void AccountDetail::Connect()
{
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(slotok()),Qt::QueuedConnection);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

void AccountDetail::slotok()
{
    QString accountName(ui->comboBox->currentText());
    if (accountName.isEmpty()) {
        QMessageBox::warning(0, tr("Missing information"), tr("No account is selected for transmission"));
        return;
    }

    QMessage message;

    QPair<QMessage::Type, QMessageAccountId> details = _accountDetails[accountName];
    message.setType(details.first);
    message.setParentAccountId(details.second);

    QString to(ui->lineEdit->text());
    if (to.isEmpty()) {
        QMessageBox::warning(0, tr("Missing information"), tr("Please enter a recipient address"));
        return;
    }

    // Find the address type to use for this message
    QMessageAddress::Type addrType(message.type() == QMessage::Email ? QMessageAddress::Email : QMessageAddress::Phone);

    QMessageAddressList toList;
    foreach (const QString &item, to.split(QRegExp("\\s"), QString::SkipEmptyParts)) {
        toList.append(QMessageAddress(addrType, item));
    }
    message.setTo(toList);

    if (message.type() == QMessage::Email) {
        QString subject("Volleyclubstats");
        if (subject.isEmpty()) {
            QMessageBox::warning(0, tr("Missing information"), tr("Please enter a subject"));
            return;
        }
        message.setSubject(subject);
    }


    if (_text.isEmpty()) {
        QMessageBox::warning(0, tr("Missing information"), tr("Please enter a message"));
        return;
    }
    message.setBody(_text);

    if (message.type() != QMessage::Sms) {
        /*if (attachmentsList->count()) {
            QStringList paths;
            for (int i = 0; i < attachmentsList->count(); ++i) {
                paths.append(attachmentsList->item(i)->text());
            }

            message.appendAttachments(paths);
        }*/
    }

    if (service.send(message)) {
       QMessageBox::information(0, tr("Envoie"), tr("message envoye"));
    } else {
        QMessageBox::warning(0, tr("Failed"), tr("Impossible d'envoyer le message"));
    }
    this->close();
    }
void AccountDetail::SetText(QString text)
{
    this->_text=text;
}
