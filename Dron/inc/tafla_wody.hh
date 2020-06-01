
#ifndef TAFLA_WODY_HH
#define TAFLA_WODY_HH
#include "Plaszczyzna.hh"
#include "Przeszkoda.hh"


class tafla : public Plaszczyzna, public Przeszkoda
{
    
public:

tafla(){};

void narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) override;

bool czy_przeszkoda(std::shared_ptr<interfejs> D) override;

};




#endif