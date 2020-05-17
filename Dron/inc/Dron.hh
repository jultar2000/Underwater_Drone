#ifndef DRON_HH
#define DRON_HH
#include "Prostopadloscian.hh"
#include "Graniastoslup.hh"
#include <iostream>


class Dron : public Prostopadloscian
{
public:

Dron(){};

Dron(double AA,double BB,double CC);

void obroc_x(double kat);

void obroc_y(double kat);

void obroc_z(double kat);

void poruszaj(double dlugosc,double kat);

void plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api);

void obroc_anim(double kat,std::shared_ptr<drawNS::Draw3DAPI> api);


};


#endif
