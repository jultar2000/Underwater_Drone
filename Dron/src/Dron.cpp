#include "Dron.hh"
#include <iostream>
#define PI 3.14



Dron::Dron(double AA,double BB,double CC)
{
  A = AA;
  B = BB;
  C = CC;
}


void Dron::obroc_x(double kat)
     {
MacierzOB mac(kat,'x');
orientacja=mac*orientacja;
     }

void Dron::obroc_y(double kat)
     {
MacierzOB mac(kat,'y');
orientacja=mac*orientacja;
     }    

void Dron::obroc_z(double kat)
     {
MacierzOB mac(kat,'z');
orientacja=mac*orientacja;
     }

void Dron::poruszaj(Wektor3D &wek)
     {
punkt_odn= punkt_odn + wek;
     }


void Dron::plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api)
{

kat=kat*PI/180;


for(int i=0;i<kat;i++)
    {
     int dron=(*this).narysuj(api);
     (*this).obroc_y(kat);
    sfdgwergtwergtwergreww;
    }

Wektor3D ruch(sin(kat),cos(kat),0);
for(int j=0;j<dlugosc;j++)
 {    
     int dron1=(*this).narysuj(api);
     (*this).poruszaj(ruch);      
     api->erase_shape(dron1);
     
 } 
}








