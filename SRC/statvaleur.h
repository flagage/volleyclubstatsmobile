#ifndef STATVALEUR_H
#define STATVALEUR_H

#include <QString>

class StatValeur
{
public:
    StatValeur();
    void add(int valeur);
    double GetValeur(int valeur);
    void SetValeur(int valeur,double dbvaleur);

private:
    double _vpp;
    double _vp;
    double _v0;
    double _vm;
    double _vmm;
    double _tot;
    double _eff;
};

#endif // STATVALEUR_H
