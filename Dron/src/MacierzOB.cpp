
#include "MacierzOB.hh"
#include "Macierz.hh"
#include <cmath>
using namespace std;
#define Pi 3.14



MacierzOB::MacierzOB() 
        {
tab1[0][0]=1;       
tab1[1][1]=1; 
tab1[2][2]=1; 
       }



MacierzOB::MacierzOB(double kat, char os)
{  

kat=kat*Pi/180;

tab1[0][0]=1;       
tab1[1][1]=1; 
tab1[2][2]=1;

switch (os)
 {
case 'x':
  {
tab1[1][1]=cos(kat);
tab1[2][2]=cos(kat);
tab1[2][1]=sin(kat);
tab1[1][2]=-sin(kat);
break;
    }
case 'y':
{
tab1[0][0]=cos(kat);
tab1[2][2]=cos(kat);
tab1[0][2]=sin(kat);
tab1[2][0]=-sin(kat);
break;
 }
case 'z':
 {
tab1[0][0]=cos(kat);
tab1[1][1]=cos(kat);
tab1[0][1]=-sin(kat);
tab1[1][0]=sin(kat);
break;
 }
    }

}

