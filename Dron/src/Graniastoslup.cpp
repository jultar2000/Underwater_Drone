#include "Graniastoslup.hh"




Graniastoslup::Graniastoslup(double bokA,double bokB)
{
a=bokA;
b=bokB;
}


void Graniastoslup::wspolrzedne(Wektor3D wsp[]) const
{

Wektor3D sr_prost(A/2,B/2,C/2);
Wektor3D sr_gran(a/2,a/2,b/2);

Wektor3D punkt_srodka = punkt_odn-sr_prost-sr_gran;


  Wektor3D obrot_x(a,0,0);

  Wektor3D obrot_y(0,a,0);

  Wektor3D obrot_z(0,0,b);

Wektor3D OrX=orientacja*obrot_x;
Wektor3D OrY=orientacja*obrot_y;
Wektor3D OrZ=orientacja*obrot_z;


wsp[0] = punkt_odn + orientacja * sr_gran;
wsp[1] = punkt_odn + orientacja * sr_gran;
wsp[2] = punkt_odn + orientacja * sr_gran;
wsp[3] = punkt_odn + orientacja * sr_gran;
wsp[4] = punkt_odn + orientacja * sr_gran;
wsp[5] = punkt_odn + orientacja * sr_gran;
wsp[6] = punkt_odn + orientacja * sr_gran;
wsp[7] = punkt_odn + orientacja * sr_gran;
wsp[8] = punkt_odn + orientacja * sr_gran;
wsp[9] = punkt_odn + orientacja * sr_gran;
wsp[10] = punkt_odn + orientacja * sr_gran;
wsp[11] = punkt_odn + orientacja * sr_gran;

}

int Prostopadloscian::narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) const 
{
 Wektor3D tab[12];
(*this).wspolrzedne(tab);
 
}
