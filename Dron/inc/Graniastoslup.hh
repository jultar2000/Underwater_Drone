#ifndef GRANIASTOSLUP_HH
#define GRANIASTOSLUP_HH
#include "Prostopadloscian.hh"


class Graniastoslup : public Prostopadloscian
{
public:

double a;

double b;



Graniastoslup(){};

Graniastoslup(double bokA, double bokB);

int narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) const override;

void wspolrzedne(Wektor3D wsp[]) const;

};

#endif

