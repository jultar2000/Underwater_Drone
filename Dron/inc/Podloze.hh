
#ifndef PODLOZE_HH
#define PODLOZE_HH

#include "Plaszczyzna.hh"
#include "Przeszkoda.hh"
#include "Wektor.hh"







class Podloze : public Plaszczyzna , public Przeszkoda
{
public:

Podloze(){};

void narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) override;

bool czy_przeszkoda(std::shared_ptr<interfejs> D) override;
};


#endif