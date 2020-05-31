#ifndef PRZESZKODA_HH
#define PRZESZKODA_HH



#include "interfejs.hh"
#include <iostream>
#include "Dr3D_gnuplot_api.hh"
#include "Wektor.hh"
#include "MacierzOB.hh"
#include <unistd.h>
using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;



class Przeszkoda 
{

public:

virtual bool czy_przeszkoda(std::shared_ptr<interfejs> D)=0;

};


#endif









