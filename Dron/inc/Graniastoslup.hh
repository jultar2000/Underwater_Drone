#ifndef GRANIASTOSLUP_HH
#define GRANIASTOSLUP_HH
#define PI 3.14
#include "Prostopadloscian.hh"
#include "Obiekt3D.hh"

class Graniastoslup : public Obiekt3D
{
public:

double a;

double b;

Graniastoslup(){};

Graniastoslup(double bokA, double bokB);

int narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) override;

void wspolrzedne(Wektor3D wsp[]) const;

void wez_bok(double a,double b);

void obracaj_wirL(MacierzOB M);

void obracaj_wirP(MacierzOB M, Wektor3D wek);

void pozycja(const Wektor3D &wek);

void plyn_wirnik(double dlugosc,double kat);

void obroc_lewy(double kat);

void obroc_prawy(double kat);

void porusz(double dlugosc);

};

#endif

