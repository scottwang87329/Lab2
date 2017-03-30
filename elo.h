#ifndef __ELO_H__
#define __ELO_H__

#include <cmath>

class Elo
{
public:
    int getR(bool isA);
    void setR(bool isA, int R);
    double getE(bool isA);
    void updateR(double S);
    Elo(int _RA, int _RB, int K);

private:
    int RA;
    int RB;
    int K;
};

#endif
