#ifndef ACCOUNTDETAIL_H
#define ACCOUNTDETAIL_H

#include <QWidget>
#include <QMap>
#include <QMessageBox>


#include "QMessage"
#include "QMessageAccount"
#include "QMessageService"
#include "QMessageManager"

using namespace QtMobility;

namespace Ui {
class AccountDetail;
}

class AccountDetail : public QDialog
{
    Q_OBJECT
    
public:
    explicit AccountDetail(QWidget *parent = 0);
    ~AccountDetail();
    void Init();
    void Connect();
    void SetText(QString text);
public slots:
    void slotok();
private:
    Ui::AccountDetail *ui;
     QMap<QString, QPair<QMessage::Type, QMessageAccountId> > _accountDetails;
     QMessageManager manager;
     QMessageService service;
     QString _text;
};

#endif // ACCOUNTDETAIL_H
