#ifndef DRON_HH
#define DRON_HH
#include "Prostopadloscian.hh"
#include "Graniastoslup.hh"
#include "interfejs.hh"
#include <iostream>


class Dron : public Prostopadloscian,  public interfejs
{
protected:

Graniastoslup lewy_wirnik;

Graniastoslup prawy_wirnik;

public:
Dron(){};

Dron(double AA,double BB,double CC);

void obroc_x(double kat) override;

void obroc_y(double kat) override;

void obroc_z(double kat) override;

void poruszaj(double dlugosc,double kat) override;

void plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api) override;

void obroc_anim_z(double kat,std::shared_ptr<drawNS::Draw3DAPI> api) override;

void rysuj_dron(std::shared_ptr<drawNS::Draw3DAPI> api) override;







};






#endif
