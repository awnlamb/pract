#include "nodnok.h"
//#include <cmath>
nodnok::nodnok() {}
nodnok::nodnok(int c,int d)
{
    a=c;b=d;
}
int nodnok::nod()
{
    if (a<0) a*=-1;
    if (b<0) b*=-1;
    if (b == 0)
        return a;
    else
    {
        int t=a;
        a=b;
        b=t%b;
        return this->nod();
    }
    /*if (a % b == 0) return b;
    if (b % a == 0) return a;
    if (a > b)
    {
        a%=b;
        return abs(this->nod());
    }
    else
    {
        b%=a;
        return abs(this->nod());
    }*/
}

int nodnok::nok()
{
    if (a < 0) a *= -1;
    if (b < 0) b *= -1;
    return (a*b)/(nod());
}
