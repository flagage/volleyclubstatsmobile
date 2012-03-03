#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"
#include "accountdetail.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->AjustSize();
    this->Init();

    this->Creationbutton ();
    this->CreationSpinBox();
    this->Connection();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setOrientation(ScreenOrientation orientation)
{
#if defined(Q_OS_SYMBIAN)
    // If the version of Qt on the device is < 4.7.2, that attribute won't work
    if (orientation != ScreenOrientationAuto) {
        const QStringList v = QString::fromAscii(qVersion()).split(QLatin1Char('.'));
        if (v.count() == 3 && (v.at(0).toInt() << 16 | v.at(1).toInt() << 8 | v.at(2).toInt()) < 0x040702) {
            qWarning("Screen orientation locking only supported with Qt 4.7.2 and above");
            return;
        }
    }
#endif // Q_OS_SYMBIAN

    Qt::WidgetAttribute attribute;
    switch (orientation) {
#if QT_VERSION < 0x040702
    // Qt < 4.7.2 does not yet have the Qt::WA_*Orientation attributes
    case ScreenOrientationLockPortrait:
        attribute = static_cast<Qt::WidgetAttribute>(128);
        break;
    case ScreenOrientationLockLandscape:
        attribute = static_cast<Qt::WidgetAttribute>(129);
        break;
    default:
    case ScreenOrientationAuto:
        attribute = static_cast<Qt::WidgetAttribute>(130);
        break;
#else // QT_VERSION < 0x040702
    case ScreenOrientationLockPortrait:
        attribute = Qt::WA_LockPortraitOrientation;
        break;
    case ScreenOrientationLockLandscape:
        attribute = Qt::WA_LockLandscapeOrientation;
        break;
    default:
    case ScreenOrientationAuto:
        attribute = Qt::WA_AutoOrientation;
        break;
#endif // QT_VERSION < 0x040702
    };
    setAttribute(attribute, true);
}

void MainWindow::showExpanded()
{
#if defined(Q_OS_SYMBIAN) || defined(Q_WS_SIMULATOR)
    showFullScreen();
#elif defined(Q_WS_MAEMO_5)
    showMaximized();
#else
    show();
#endif
}

void MainWindow::AjustSize()
{


}

void MainWindow::Init()
{
  _listValeur<<"++"<<"+"<<"0"<<"-"<<"--";
  _listAction<<"Service"<<"Reception"<<"Attaque"<<"Defence";
    _nbButton=0;
    _nbSpinBox=0;
    for(int i=0;i<5;i++)
    {
        this->_statmap[i]=new StatValeur();
    }
}




void MainWindow::Creationbutton()
{
    for(int i=0;i<5;i++)
    {
        this->_tabSbutton[i]=new StatBoutton(_listValeur[i],0,this);
        ui->gridLayout_2->addWidget(_tabSbutton[i], 2, i, 1, 1);
        _nbButton++;
    }

    for(int i=0;i<5;i++)
    {
        this->_tabSbutton[i+5]=new StatBoutton(_listValeur[i],1,this);
        ui->gridLayout_3->addWidget(_tabSbutton[i+5], 2, i, 1, 1);
        _nbButton++;
    }

    for(int i=0;i<5;i++)
    {
        this->_tabSbutton[i+10]=new StatBoutton(_listValeur[i],2,this);
        ui->gridLayout_4->addWidget(_tabSbutton[i+10], 1, i, 1, 1);
        _nbButton++;
    }
    for(int i=0;i<5;i++)
    {
        this->_tabSbutton[i+15]=new StatBoutton(_listValeur[i],3,this);
        ui->gridLayout_5->addWidget(_tabSbutton[i+15], 1, i, 1, 1);
        _nbButton++;
    }


}

void MainWindow::CreationSpinBox()
{
    int Maxval=7;
 for(int i=0;i<Maxval;i++)
    {
        this->_tabSpinBox[i]=new StatSpinBox(0,i,this);
        ui-> gridLayout_7->addWidget(_tabSpinBox[i], 1, i+1, 1, 1);
        _nbSpinBox++;
    }

    for(int i=0;i<Maxval;i++)
    {
        this->_tabSpinBox[i+Maxval]=new StatSpinBox(1,i,this);
        ui-> gridLayout_8->addWidget(_tabSpinBox[i+Maxval], 1, i+1, 1, 1);
        _nbSpinBox++;
    }

     for(int i=0;i<Maxval;i++)
    {
        this->_tabSpinBox[i+(2*Maxval)]=new StatSpinBox(2,i,this);
        ui-> gridLayout_9->addWidget(_tabSpinBox[i+(2*Maxval)], 1, i+1, 1, 1);
        _nbSpinBox++;
    }
      for(int i=0;i<Maxval;i++)
    {
        this->_tabSpinBox[i+(3*Maxval)]=new StatSpinBox(3,i,this);
        ui-> gridLayout_10->addWidget(_tabSpinBox[i+(3*Maxval)], 1, i+1, 1, 1);
        _nbSpinBox++;
    }



}

void MainWindow::Connection()
{
    for(int k=0;k<_nbButton;k++)
    {
        connect(this->_tabSbutton[k],SIGNAL(clicked(QString)),this,SLOT(SlotTraitementClick(QString)));
    }
    for(int j=0;j<_nbSpinBox;j++)
    {
       connect(this->_tabSpinBox[j],SIGNAL(valueChanged(QString)),this,SLOT(SlotTraitementSpin(QString)));
    }
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(SlotEnvoi()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(SlotRaz()));

}

void MainWindow::SlotEnvoi()
{
    QString Message;
     int Maxval=7;
     int val;

    for(int i=0;i<4;i++)
    {
        Message=Message+_listAction[i]+"_";
        for(int j=0;j<Maxval;j++)
        {
            val=_statmap[i]->GetValeur(j);
            Message=Message+QString::number(val)+"_";
        }

        Message=Message+"\n";
    }


    /*AccountDetail * FenetreEnvoye=new AccountDetail();

    FenetreEnvoye->SetText(Message);
    if(FenetreEnvoye->exec()==true)
    {

    }*/
}

void MainWindow::SlotTraitementClick(QString msgtrait)
{

    //QMessageBox::information (this,"message",text);
    ///On analyse le message:numAction_ValeurAction
    QStringList action=msgtrait.split ("_");
    QString num=action.at (0);
    int numaction=num.toInt ();
    QString valeur=action.at (1);
    if(valeur=="++")
    {
        this->_statmap[numaction]->add (0);
    }
    else if(valeur=="+")
    {
        this->_statmap[numaction]->add (1);
    }
    else if(valeur=="0")
    {
        this->_statmap[numaction]->add (2);
    }
    else if(valeur=="-")
    {
        this->_statmap[numaction]->add (3);
    }
    else if (valeur=="--")
    {
        this->_statmap[numaction]->add (4);
    }
    MajResultat();
}


void MainWindow::SlotTraitementSpin(QString text)
{
 QStringList action=text.split ("_");
    QString num=action.at (0);
    int numaction=num.toInt ();
    num=action.at (1);
    int numvaleur=num.toInt ();
    num=action.at (2);
    double dbvaleur=num.toDouble ();

    this->_statmap[numaction]->SetValeur (numvaleur,dbvaleur);
    this->MajResultat();

}

void MainWindow::MajResultat()
{
    int MaxVal=7;
    for(int act=0;act<4;act++)
    {
        for(int val=0;val<MaxVal;val++)
        {
            this->_tabSpinBox[val+act*(MaxVal)]->setValue (this->_statmap[act]->GetValeur (val));
        }
    }
}

void MainWindow::SlotRaz()
{
    int MaxVal=7;
    for(int act=0;act<4;act++)
    {
        for(int val=0;val<MaxVal;val++)
        {
            this->_tabSpinBox[val+act*(MaxVal)]->setValue(0);
              this->_statmap[act]->SetValeur (val,0);

        }
    }
}
