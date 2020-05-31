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

porusz_prawy=przesun_prawy;
porusz_lewy=przesun_lewy;
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
     

void Dron::rysuj_dron(std::shared_ptr<drawNS::Draw3DAPI> api)
{
obroc_lewy_wirnik();
obroc_prawy_wirnik();
//lewy_wirnik.obroc_wir(1);
//lewy_wirnik.obroc_wir(1);  
lewy_wirnik.narysuj(api);
prawy_wirnik.narysuj(api);
narysuj(api);
}


void Dron::poruszaj(double dlugosc,double kat)
     {
kat=PI*kat/180;     
double kat2=orientacja.zwroc_kat()*PI/180;
Wektor3D w(cos(kat)*cos(kat2),cos(kat)*sin(kat2),sin(kat));
w=w*dlugosc;
punkt_odn=punkt_odn+w;
     }




void Dron::plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api) 
{
for(int j=0;j<150;j++)
 {             
poruszaj(dlugosc/150,kat);  
rysuj_dron(api);
usleep(1000); 
 } 
}




void Dron::obroc_prawy_wirnik()
{
prawy_wirnik.pozycja(punkt_odn-orientacja*porusz_prawy);
prawy_wirnik.ustaw_orientacje(orientacja);
}



void Dron::obroc_lewy_wirnik() 
{
lewy_wirnik.pozycja(punkt_odn-orientacja*porusz_lewy);
lewy_wirnik.ustaw_orientacje(orientacja);
}



void Dron::obroc_dron(double kat,std::shared_ptr<drawNS::Draw3DAPI> api)
{
for(int i=0;i<kat;i++)
    {    
obroc_z(1);
rysuj_dron(api);
usleep(1000);  
 }
}
