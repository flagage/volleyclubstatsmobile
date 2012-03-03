#ifndef STATSPINBOX_H
#define STATSPINBOX_H

#include <QSpinBox>

class StatSpinBox : public QDoubleSpinBox
{
    Q_OBJECT
public:
    explicit StatSpinBox(int action,int valeur,QWidget *parent = 0);
public slots:
    void reemitvalueChanged();
 signals:
  void valueChanged(QString );
private :
    int _Myaction;
    int _Myvaleur;
};

#endif // STATSPINBOX_H
