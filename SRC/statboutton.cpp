#include "statboutton.h"

StatBoutton::StatBoutton(QString text,int action,QWidget *parent) :
    QPushButton(text,parent)
{
    _Mytext=text;
    _Mynumaction=action;
    connect(this,SIGNAL(clicked()),this,SLOT(reemitClicked()));
}


void StatBoutton::reemitClicked ()
{
    QString msg=QString::number (_Mynumaction);
    msg=msg+"_"+_Mytext;
    emit clicked(msg);
}
