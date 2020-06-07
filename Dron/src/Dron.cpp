#include "Dron.hh"
#include <iostream>
using std::enable_shared_from_this;
#define PI 3.14



Dron::Dron(double AA,double BB,double CC)
{
     
  A = AA;
  B = BB;
  C = CC;

Wektor3D przesun_prawy(0,AA/5,0);
Wektor3D przesun_lewy(0,-AA/5,0);
lewy_wirnik.wez_bok(AA/5,BB/2);
lewy_wirnik.pozycja(przesun_lewy);
prawy_wirnik.wez_bok(AA/5,BB/2);
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
lewy_wirnik.narysuj(api);
prawy_wirnik.narysuj(api);
narysuj(api);
}



void Dron::poruszaj(double dlugosc,double kat)
     {
kat=PI*kat/180;     
Wektor3D w(cos(kat),0,sin(kat));
w=orientacja*w;
punkt_odn=punkt_odn+w*dlugosc;
     }



void Dron::plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api) 
{

poruszaj(dlugosc,kat);  
rysuj_dron(api);
usleep(10000); 
}




void Dron::obroc_wirniki()
{
lewy_wirnik.obroc_wir(1);
prawy_wirnik.obroc_wir(-1); 
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
if(kat>=0){
for(int i=0;i<kat;i++)
    {    
obroc_z(1);
rysuj_dron(api);
usleep(10000);  
    }
 }
 else{
for(int i=kat;i<0;i++)
    {         
obroc_z(-1);
rysuj_dron(api);
usleep(10000);  
   }
  }
}



bool Dron::czy_przeszkoda(std::shared_ptr<interfejs> D)
{
double R=wez_promien();
double r=(*this).wez_promien();

Wektor3D w=D->zwrot_srodek()-(this)->zwrot_srodek();
double d=sqrt(pow(w[0],2)+pow(w[1],2)+pow(w[2],2));
if(D->zwrot_srodek()==punkt_odn)
return false;
if(R+r>d)
return true;
else
return false;
}


double Dron::wez_promien()
{
double promien;
promien=A/2;
return promien;
}


double Dron::wez_wysokosc() 
{
double wysokosc;
wysokosc=C;
return wysokosc;
}











