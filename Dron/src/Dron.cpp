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

void Dron::poruszaj(double dlugosc,double kat)
     {
Wektor3D ruch(cos(kat)*dlugosc,cos(kat)*dlugosc,sin(kat)*dlugosc);
punkt_odn= punkt_odn + ruch;
     }


void Dron::obroc_anim(double kat,std::shared_ptr<drawNS::Draw3DAPI> api)
{
for(int i=0;i<kat;i++)
    {    
double a=kat*PI/180;
int dron = (*this).narysuj(api);
(*this).obroc_z(a);
api->erase_shape(dron);    
 }
}

void Dron::plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api) 
{
     
for(int j=0;j<50;j++)
 {         
     (*this).poruszaj(dlugosc/50,kat);  
     int dron1=(*this).narysuj(api);
     if(j!=dlugosc-1)
     {  
     api->erase_shape(dron1);  
      }
 } 
}







