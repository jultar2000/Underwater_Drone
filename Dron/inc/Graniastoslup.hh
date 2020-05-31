#ifndef GRANIASTOSLUP_HH
#define GRANIASTOSLUP_HH
#define PI 3.14
#include "Prostopadloscian.hh"
#include "Obiekt3D.hh"

class Graniastoslup : public Obiekt3D
{
protected:

double a;

double b;

MacierzOB obrot;
public:
Graniastoslup(){};

Graniastoslup(double bokA, double bokB);

void narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) override;

void wspolrzedne(Wektor3D wsp[]) const;

void wez_bok(double a,double b);

void obroc_wir(double kat);



};

#endif

