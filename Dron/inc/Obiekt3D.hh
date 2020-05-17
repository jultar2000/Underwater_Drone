#ifndef OBIEKT_3D
#define OBIEKT_3D



#include <iostream>
#include "Dr3D_gnuplot_api.hh"
#include "Wektor.hh"
#include "MacierzOB.hh"
using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;


class Obiekt3D 
{
protected:

Wektor3D punkt_odn;

MacierzOB orientacja;

public:



virtual int narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) const = 0;

void pozycja(const Wektor3D &Wektor) ; 

void ustaw_orientacje(const MacierzOB &Macierz) ; 


//virtual int wymaz();

//Obiekt3D()=delete;




};








































#endif 