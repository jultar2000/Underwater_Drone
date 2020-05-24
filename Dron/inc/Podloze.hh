
#ifndef PODLOZE_HH
#define PODLOZE_HH

#include "Plaszczyzna.hh"







class Podloze : public Plaszczyzna
{
public:

Podloze(){};

int narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) override ;


};


#endif
