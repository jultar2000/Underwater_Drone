
#ifndef TAFLA_WODY_HH
#define TAFLA_WODY_HH
#include "Plaszczyzna.hh"



class tafla : public Plaszczyzna
{
    
public:

tafla(){};

void narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) override;



};




#endif