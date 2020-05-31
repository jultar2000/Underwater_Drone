#ifndef MACIERZOB_HH
#define MACIERZOB_HH


#include "Macierz.hh"
#include <cmath>


class MacierzOB : public Macierz<double,3> 
{ 
public:

double kat_1;

MacierzOB();

MacierzOB(double kat, char os);

MacierzOB(const Macierz<double,3> & M) : Macierz<double,3> (M)
{
double epsilon=0.00000001;
for(int i=0;i<1;i++)
    {
if(abs(M[i]*M[i+1]) > epsilon)
exit(1);
    }
if(abs(M[1]*M[2]) > epsilon)
        {
exit(1);
        }
if(abs(M.wyznacznik_1()) > 1)
  {
exit(1);
  }
}

double zwroc_kat();

};

#endif










