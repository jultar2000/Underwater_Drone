#ifndef GRANIASTOSLUP_HH
#define GRANIASTOSLUP_HH
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


};

#endif

