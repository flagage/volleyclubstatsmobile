#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QMessageBox>
#include <QMap>
#include "SRC/statboutton.h"
#include "SRC/statspinbox.h"
#include "SRC/statvaleur.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    enum ScreenOrientation {
        ScreenOrientationLockPortrait,
        ScreenOrientationLockLandscape,
        ScreenOrientationAuto
    };

    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

    // Note that this will only have an effect on Symbian and Fremantle.
    void setOrientation(ScreenOrientation orientation);

    void showExpanded();


    void Init();
    void AjustSize();
    void Creationbutton();
    void CreationSpinBox();
    void Connection();

    void MajResultat();

public slots:
 void SlotTraitementClick(QString);
 void SlotTraitementSpin(QString);
 void SlotEnvoi();
 void SlotRaz();
 void SlotFaute();
private:
    Ui::MainWindow *ui;
    StatBoutton*  _tabSbutton[100];
    StatSpinBox* _tabSpinBox[100];
    QStringList _listValeur;
    QStringList _listAction;
    QMap<int,StatValeur*> _statmap;
    int _nbButton;
    int _nbSpinBox;
    int _nbFaute;
};

#endif // MAINWINDOW_H
