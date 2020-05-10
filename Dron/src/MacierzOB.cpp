
#include "MacierzOB.hh"
#include "Macierz.hh"
#include "cmath"
#include "Wektor.hh"
using namespace std;

MacierzOB::MacierzOB(const Macierz<double,3> & M)
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
if(abs(M.wyznacznik_1()) > epsilon)
  {
exit(1);
  }
}

/*
MacierzOB MacierzOB::obrot(dobule kat, char znak)
{  
int tab[3][3];  

for(int i=0;i<3;i++)
{
    for(int j;j<3;j++)
    {
 if(j==i)
tab[i][i]=1;
 else
tab[i][i]=0;
             
    }
}
switch (znak)
 {
case 'x':
  {
tab[1][1]=cos(kat);
tab[2][2]=cos(kat);
tab[2][1]=sin(kat);
tab[1][2]=-sin(kat);
    }
case 'y':
{
tab[0][0]=cos(kat);
tab[2][2]=cos(kat);
tab[0][2]=sin(kat);
tab[2][0]=-sin(kat);
 }
case 'z':
 {
tab[0][0]=cos(kat);
tab[1][1]=cos(kat);
tab[0][1]=-sin(kat);
tab[1][0]=sin(kat);
 }


    }
}
*/
