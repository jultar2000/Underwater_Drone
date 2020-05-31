#ifndef INTERFEJS_HH
#define INTERFEJS_HH

#include "Dr3D_gnuplot_api.hh"
#include "Przeszkoda.hh"
#include "Przeszkoda.hh"
#include <unistd.h>
using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;


class interfejs
{
public:

interfejs(){};

virtual void obroc_x(double kat)=0;

virtual void obroc_y(double kat)=0;

virtual void obroc_z(double kat)=0;

virtual void poruszaj(double dlugosc,double kat)=0;

virtual void obroc_dron(double kat,std::shared_ptr<drawNS::Draw3DAPI> api)=0;

virtual void rysuj_dron(std::shared_ptr<drawNS::Draw3DAPI> api)=0;

virtual void plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api)=0;

virtual void obroc_prawy_wirnik() =0;

virtual void obroc_lewy_wirnik() =0;



};


#endif
