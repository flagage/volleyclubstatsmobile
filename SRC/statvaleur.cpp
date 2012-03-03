#include "statvaleur.h"


StatValeur::StatValeur()
{
_vpp=_vp=_v0=_vm=_vmm=_tot=_eff=0;
}

void StatValeur::add (int valeur)
{
    switch(valeur)
    {
        case 0:
            _vpp=_vpp+1;
        break;
        case 1:
            _vp=_vp+1;
        break;
        case 2:
            _v0=_v0+1;
        break;
        case 3:
            _vm=_vm+1;
        break;
        case 4:
            _vmm=_vmm+1;
        break;
        default:
            return;
          break;
    }
    _tot=_tot+1;

    int diff=(_vpp-_vmm);

    if(_tot!=0)
    {
        _eff=diff/_tot;
        _eff=_eff*100;
    }
}

double StatValeur::GetValeur(int valeur)
{
    switch(valeur)
    {
        case 0:
            return _vpp;
        break;
        case 1:
            return _vp;
        break;
        case 2:
            return _v0;
        break;
        case 3:
            return _vm;
        break;
        case 4:
            return _vmm;
        break;
         case 5:
            return _tot;
        break;
         case 6:
            return _eff;
        break;
        default:
            return 0;
          break;
    }
}

void StatValeur::SetValeur (int valeur, double dbvaleur)
{
     switch(valeur)
    {
        case 0:
             _vpp=dbvaleur;
        break;
        case 1:
             _vp=dbvaleur;
        break;
        case 2:
             _v0=dbvaleur;
        break;
        case 3:
             _vm=dbvaleur;
        break;
        case 4:
             _vmm=dbvaleur;
        break;
         case 5:
             _tot=dbvaleur;
        break;
         case 6:
             _eff=dbvaleur;
        break;
        default:

          break;
    }
     _tot=_vpp+_vp+_v0+_vm+_vmm;

     int diff=(_vpp-_vmm);

     if(_tot!=0)
     {
         _eff=diff/_tot;
         _eff=_eff*100;
     }
}
