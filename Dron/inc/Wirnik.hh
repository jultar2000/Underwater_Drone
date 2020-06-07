#ifndef WIRNIK_HH
#define WIRNIK_HH


#include "Prostopadloscian.hh"
#include "Obiekt3D.hh"
#include "Graniastoslup.hh"
#include "MacierzOB.hh"

class Wirnik : public Graniastoslup
{
protected:

MacierzOB obrot;

Wektor3D pozycja_akt;

void wspolrzedne(Wektor3D wsp[]) const;

public:

Wirnik(){};

Wirnik(double bokA, double bokB);

void narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) override;

void wez_bok(double a,double b);

void obroc_wir(double kat);



};

#endif

