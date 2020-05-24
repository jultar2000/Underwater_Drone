#include "Dron.hh"
#include <iostream>
#define PI 3.14



Dron::Dron(double AA,double BB,double CC)
{
     
  A = AA;
  B = BB;
  C = CC;

Wektor3D przesun_prawy(0,AA/5,0);

Wektor3D przesun_lewy(0,-AA/5,0);

lewy_wirnik.wez_bok(AA/10,BB/2);

lewy_wirnik.pozycja(przesun_lewy);

prawy_wirnik.wez_bok(AA/10,BB/2);

prawy_wirnik.pozycja(przesun_prawy);


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
double kat0=0;

Wektor3D w(cos(PI*kat/180)*cos(PI*kat/180), sin(PI*kat/180)*cos(PI*kat/180),sin(PI*kat/180));
w=w*dlugosc;
w=orientacja*w;
punkt_odn=punkt_odn+w;
     }


void Dron::obroc_anim_z(double kat,std::shared_ptr<drawNS::Draw3DAPI> api)

{
for(int i=0;i<kat;i++)
    {    
double a=kat*PI/180;
 (*this).narysuj(api);
(*this).obroc_z(a);   
 }
}

void Dron::plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api) 
{
for(int j=0;j<150;j++)
 {         
(*this).poruszaj(dlugosc/150,kat);  
lewy_wirnik.plyn_wirnik(dlugosc/150,kat);
prawy_wirnik.plyn_wirnik(dlugosc/150,kat);
(*this).rysuj_dron(api);
 } 
}


void Dron::rysuj_dron(std::shared_ptr<drawNS::Draw3DAPI> api)
{

lewy_wirnik.narysuj(api);
prawy_wirnik.narysuj(api);
narysuj(api);

}




