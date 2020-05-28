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

public:
Graniastoslup(){};

Graniastoslup(double bokA, double bokB);

void narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) override;

void wspolrzedne(Wektor3D wsp[]) const;

void wez_bok(double a,double b);

void pozycja(const Wektor3D &wek);

void obroc_wir(double kat);

void obroc_anim_wir_z(double kat,std::shared_ptr<drawNS::Draw3DAPI> api);

};

#endif

