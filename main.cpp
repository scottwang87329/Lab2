#include <iostream>
#include <fstream>
#include "elo.h"

using namespace std;

int main()
{
    int K, InitRA, InitRB;
    double Score;
    fstream fin("./file.in", ios::in);
    fstream fout("./file.out", ios::out);
    fin >> K >> InitRA >> InitRB;
    Elo e(InitRA, InitRB, K);
    fout << e.getR(true) << ' ' << e.getR(false) << endl;
    while(fin >> Score)
    {
        e.updateR(Score);
        fout << e.getR(true) << ' ' << e.getR(false) << endl;
    }
    return 0;
}
