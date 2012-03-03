#ifndef STATBOUTTON_H
#define STATBOUTTON_H

#include <QPushButton>

class StatBoutton : public QPushButton
{
    Q_OBJECT
public:
    explicit StatBoutton(QString text,int numAction,QWidget *parent = 0);

signals:
    void clicked(QString text);
    //void rclicked();
public slots:
    void reemitClicked();
private:
    QString _Mytext;
    int _Mynumaction;

};

#endif // STATBOUTTON_H
