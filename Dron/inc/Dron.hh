#ifndef DRON_HH
#define DRON_HH
#include "Prostopadloscian.hh"
#include <iostream>


class Dron : public Prostopadloscian
{
public:

Dron(){};

Dron(double AA,double BB,double CC);

void obroc_x(double kat);

void obroc_y(double kat);

void obroc_z(double kat);

void poruszaj(Wektor3D &wek);

void plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api);

};


#endif
