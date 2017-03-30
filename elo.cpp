#include "elo.h"

Elo::Elo(int _RA, int _RB, int _K)
{
    RA = _RA;
    RB = _RB;
    K = _K;
}

void Elo::setR(bool isA, int R)
{
    isA ? RA = R : RB = R;
}

int Elo::getR(bool isA)
{
    return isA ? RA : RB;
}

double Elo::getE(bool isA)
{
    return 1.0 / (1.0 + pow(10, 1.0*(RA-RB)*pow(-1,isA)/400));
}

void Elo::updateR(double SA)
{
    int RA_new, RB_new;
    RA_new = round(RA + 1.0*K*(SA - getE(true)));
    RB_new = round(RB + 1.0*K*((1-SA) - getE(false)));
    RA = RA_new;
    RB = RB_new;
}
