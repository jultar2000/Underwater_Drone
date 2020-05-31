#ifndef PLASZCZYZNA_HH
#define PLASZCZYZNA_HH
#include "Obiekt3D.hh"





class Plaszczyzna : public Obiekt3D
{
public:


virtual void narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) =0;

};

#endif
