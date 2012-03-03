#include "statspinbox.h"

StatSpinBox::StatSpinBox(int action,int valeur,QWidget *parent):QDoubleSpinBox(parent)
{
    this->_Myaction=action;
    this->_Myvaleur=valeur;
    this->setButtonSymbols(QAbstractSpinBox::NoButtons);
    this->setDecimals (0);
    connect(this,SIGNAL(editingFinished()),this,SLOT(reemitvalueChanged()));
}


void StatSpinBox::reemitvalueChanged ()
{
    QString msg;
    msg=QString::number (this->_Myaction)+"_"+QString::number (this->_Myvaleur)+"_"+QString::number (this->value());
    emit valueChanged (msg);
}


