#ifndef DRON_HH
#define DRON_HH



#include "Dr3D_gnuplot_api.hh"
#include "Prostopadloscian.hh"
#include "Graniastoslup.hh"
#include "interfejs.hh"
#include "Przeszkoda.hh"
#include <unistd.h>
using drawNS::APIGnuPlot3D;






class Dron : public Prostopadloscian,  public interfejs, public Przeszkoda
{
protected:

Graniastoslup lewy_wirnik;

Graniastoslup prawy_wirnik;

Wektor3D porusz_prawy;

Wektor3D porusz_lewy;



public: 

 
Dron(double AA,double BB,double CC);

void obroc_x(double kat) override;

void obroc_y(double kat) override;

void obroc_z(double kat) override;

void poruszaj(double dlugosc,double kat) override;

void plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api) override;

void rysuj_dron(std::shared_ptr<drawNS::Draw3DAPI> api) override;

void obroc_dron(double kat,std::shared_ptr<drawNS::Draw3DAPI> api) override;

void obroc_prawy_wirnik() override;

void obroc_lewy_wirnik() override;

bool czy_przeszkoda(std::shared_ptr<interfejs> D) override;

void obroc_wirniki() override;


};






#endif
