#include "nodnok.h"
#include <cmath>
nodnok::nodnok() {}
nodnok::nodnok(int c,int d)
{
    a=c;b=d;
}
int nodnok::nod()
{
    unsigned int c=abs(a);
    unsigned int d=abs(b);
    if (c % d == 0) return d;
    if (d % c == 0) return c;
    if (c > d)
    {
        c%=d;
        return this->nod();
    }
    else
    {
        d%=c;
        return abs(this->nod());
    }
}

int nodnok::nok()
{
    return (a*b)/(nod());
}
