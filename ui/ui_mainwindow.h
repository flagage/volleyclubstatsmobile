/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 3. Mar 14:24:05 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_7;
    QLabel *label_5;
    QLabel *label_17;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_27;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QGridLayout *gridLayout_8;
    QLabel *label_6;
    QGridLayout *gridLayout_9;
    QLabel *label_7;
    QPushButton *pushButton;
    QGridLayout *gridLayout_10;
    QLabel *label_8;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(229, 320);
        MainWindow->setContextMenuPolicy(Qt::PreventContextMenu);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_12 = new QGridLayout(centralWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_6->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_6->addWidget(pushButton_3, 0, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_6, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_5, 4, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_11 = new QGridLayout(tab_2);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_7->addWidget(label_5, 0, 0, 1, 1);

        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_7->addWidget(label_17, 0, 1, 1, 1);

        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_7->addWidget(label_22, 0, 2, 1, 1);

        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_7->addWidget(label_23, 0, 3, 1, 1);

        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_7->addWidget(label_27, 0, 4, 1, 1);

        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_7->addWidget(label_30, 0, 5, 1, 1);

        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_7->addWidget(label_31, 0, 7, 1, 1);

        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_7->addWidget(label_32, 0, 6, 1, 1);


        gridLayout_11->addLayout(gridLayout_7, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_8->addWidget(label_6, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_8, 2, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_9->addWidget(label_7, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_9, 3, 0, 1, 1);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_11->addWidget(pushButton, 5, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 4, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_12->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 229, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "RAZ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Service", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Attaque", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Reception", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Defense", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Saisi", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Service   ", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "++", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "--", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "EFF(%)", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindow", "TOT", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Attaque   ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Defense  ", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Envoie", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Reception", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Resultat", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
