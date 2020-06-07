#include "Przeszkoda_prostopadloscienna.hh"





przeszkoda_prost::przeszkoda_prost(double AA,double BB,double CC)
{
A=AA;
B=BB;
C=CC;
}




bool przeszkoda_prost::czy_przeszkoda(std::shared_ptr<interfejs> D)
{
double K=D->wez_promien();




Wektor3D W=D->zwrot_srodek();
if(W[0]>punkt_odn[0]-(A/2)-K)
  if(W[1]>punkt_odn[1]-(B/2)-K) 
    if(W[2]>punkt_odn[2]-(C/2)-K) 
        return true;

return false;
}



























