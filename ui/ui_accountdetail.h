/********************************************************************************
** Form generated from reading UI file 'accountdetail.ui'
**
** Created: Sat 17. Mar 16:19:16 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTDETAIL_H
#define UI_ACCOUNTDETAIL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountDetail
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AccountDetail)
    {
        if (AccountDetail->objectName().isEmpty())
            AccountDetail->setObjectName(QString::fromUtf8("AccountDetail"));
        AccountDetail->resize(487, 180);
        gridLayout_3 = new QGridLayout(AccountDetail);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AccountDetail);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(AccountDetail);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_2 = new QLabel(AccountDetail);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(AccountDetail);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton = new QPushButton(AccountDetail);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(AccountDetail);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        retranslateUi(AccountDetail);

        QMetaObject::connectSlotsByName(AccountDetail);
    } // setupUi

    void retranslateUi(QWidget *AccountDetail)
    {
        AccountDetail->setWindowTitle(QApplication::translate("AccountDetail", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AccountDetail", "De:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AccountDetail", "A:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AccountDetail", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("AccountDetail", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AccountDetail: public Ui_AccountDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTDETAIL_H
