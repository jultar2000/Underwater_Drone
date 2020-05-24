#include "Graniastoslup.hh"
#include "Obiekt3D.hh"
#include "Prostopadloscian.hh"

void obroc_lewy(double kat);

void obroc_prawy(double kat);



Graniastoslup::Graniastoslup(double bokA,double bokB)
{
a=bokA;
b=bokB;
}



void Graniastoslup::wez_bok(double aa,double bb)
{
a=aa;
b=bb;
}


void Graniastoslup::plyn_wirnik(double dlugosc,double kat)

{
Wektor3D ruch(cos(PI*kat/180), cos(PI*kat/180),sin(PI*kat/180));
punkt_odn= punkt_odn + ruch*dlugosc;
}


void Graniastoslup::wspolrzedne(Wektor3D wsp[]) const
{
Wektor3D dodaj_pozycja(-b/2,-a/2,-a);

Wektor3D srodek_gran(a/2,a/2,b/2);

srodek_gran=srodek_gran+dodaj_pozycja;

Wektor3D przesuniecie_y2(0,a/2,0);

Wektor3D przesuniecie_x(b,0,0);

Wektor3D przesuniecie_y(0,a,0);

Wektor3D przesuniecie_z(0,0,a*sqrt(3)/2);

Wektor3D OrY2=orientacja*przesuniecie_y2;
Wektor3D OrX=orientacja*przesuniecie_x;
Wektor3D OrY=orientacja*przesuniecie_y;
Wektor3D OrZ=orientacja*przesuniecie_z;


wsp[0] = punkt_odn + orientacja *srodek_gran - OrY- OrX;
wsp[1] = punkt_odn + orientacja * srodek_gran + OrY2 + OrZ- OrY- OrX;
wsp[2] = punkt_odn + orientacja *srodek_gran + OrY +OrY2 +OrZ- OrY- OrX;
wsp[3] = punkt_odn + orientacja *srodek_gran + OrY + OrY- OrY- OrX ;
wsp[4] = punkt_odn + orientacja * srodek_gran + OrY+OrY2 -OrZ- OrY- OrX;
wsp[5] = punkt_odn + orientacja *srodek_gran +OrY2 - OrZ- OrY- OrX;
wsp[6] = punkt_odn + orientacja *srodek_gran -OrX- OrY- OrX;
wsp[7] = punkt_odn + orientacja *srodek_gran + OrY2 + OrZ - OrX- OrY- OrX;
wsp[8] = punkt_odn + orientacja *srodek_gran  + OrY +OrY2 +OrZ - OrX- OrY- OrX;
wsp[9] = punkt_odn + orientacja *srodek_gran+ OrY +OrY - OrX- OrY- OrX;
wsp[10] = punkt_odn + orientacja *srodek_gran + OrY + OrY2 -OrZ - OrX- OrY- OrX;
wsp[11] = punkt_odn + orientacja *srodek_gran +OrY2 - OrZ - OrX- OrY- OrX;
}



int Graniastoslup::narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) 
{
 Wektor3D tab[12];
(*this).wspolrzedne(tab);
if (jd != -1)
    api->erase_shape(jd);
jd = api->draw_polyhedron(vector<vector<Point3D> > {{
 drawNS::Point3D(tab[0][0],tab[0][1],tab[0][2]), drawNS::Point3D(tab[1][0],tab[1][1],tab[1][2]), drawNS::Point3D(tab[2][0],tab[2][1],tab[2][2]),
       drawNS::Point3D(tab[3][0],tab[3][1],tab[3][2]), drawNS::Point3D(tab[4][0],tab[4][1],tab[4][2]), drawNS::Point3D(tab[5][0],tab[5][1],tab[5][2])
      },{
       drawNS::Point3D(tab[6][0],tab[6][1],tab[6][2]), drawNS::Point3D(tab[7][0],tab[7][1],tab[7][2]), drawNS::Point3D(tab[8][0],tab[8][1],tab[8][2]),
    drawNS::Point3D(tab[9][0],tab[9][1],tab[9][2]), drawNS::Point3D(tab[10][0],tab[10][1],tab[10][2]), drawNS::Point3D(tab[11][0],tab[11][1],tab[11][2])
	  }},"green");
    
    return jd;
}




void Graniastoslup::pozycja(const Wektor3D &wek)
{
punkt_odn=wek;
}


void Graniastoslup::obroc_wir(double kat)
{
MacierzOB mac(kat,'x');
orientacja=mac*orientacja;

}


void Graniastoslup::obroc_anim_wir_z(double kat,std::shared_ptr<drawNS::Draw3DAPI> api)
{
double a=kat*PI/180;
(*this).narysuj(api);
(*this).obroc_wir(a);   
}
















