#ifndef PLASZCZYZNA_HH
#define PLASZCZYZNA_HH

#include "Obiekt3D.hh"


class Plaszczyzna : public Obiekt3D
{
public:

double poziom;


void ustaw_poziom(double poz);

virtual int narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) const=0;

};

#endif


