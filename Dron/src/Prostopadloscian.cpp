
#include "Prostopadloscian.hh"
#include "Obiekt3D.hh"


Prostopadloscian::Prostopadloscian(double bokA, double bokB, double bokC)
{
A=bokA;
B=bokB;
C=bokC;
}

void Prostopadloscian::pozycja(const Wektor3D &Wektor) 
{
punkt_odn = Wektor;
}


void Prostopadloscian::ustaw_orientacje(const MacierzOB &Macierz)
{
orientacja = Macierz;
}


void Prostopadloscian::wspolrzedne(Wektor3D wsp[]) const
{

  Wektor3D srodkowy(A/2,B/2,C/2);

  Wektor3D obrot_x(A,0,0);

  Wektor3D obrot_y(0,B,0);

  Wektor3D obrot_z(0,0,C);

 
Wektor3D OrX=orientacja*obrot_x;
Wektor3D OrY=orientacja*obrot_y;
Wektor3D OrZ=orientacja*obrot_z;


wsp[0] = punkt_odn + orientacja * srodkowy;
wsp[1] = punkt_odn + orientacja * srodkowy - OrX;
wsp[2] = punkt_odn + orientacja * srodkowy - OrX - OrY;
wsp[3] = punkt_odn + orientacja * srodkowy - OrY;
wsp[4] = punkt_odn + orientacja * srodkowy - OrZ;
wsp[5] = punkt_odn + orientacja * srodkowy - OrX - OrZ;
wsp[6] = punkt_odn + orientacja * srodkowy - OrY - OrZ - OrX;
wsp[7] = punkt_odn + orientacja * srodkowy - OrY - OrZ;


}
int Prostopadloscian::narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) const 
{
 Wektor3D tab[8];
(*this).wspolrzedne(tab);
 int x = api->draw_polyhedron(vector<vector<Point3D> > {{
        drawNS::Point3D(tab[0][0],tab[0][1],tab[0][2]), drawNS::Point3D(tab[1][0],tab[1][1],tab[1][2]), drawNS::Point3D(tab[2][0],tab[2][1],tab[2][2]), drawNS::Point3D(tab[3][0],tab[3][1],tab[3][2])
      },{
        drawNS::Point3D(tab[4][0],tab[4][1],tab[4][2]), drawNS::Point3D(tab[5][0],tab[5][1],tab[5][2]), drawNS::Point3D(tab[6][0],tab[6][1],tab[6][2]), drawNS::Point3D(tab[7][0],tab[7][1],tab[7][2])
	  }},"red");

  return x;    
}


