#ifndef PRZESZKODA_PROSTOPADLOSCIENNA_HH
#define PRZESZKODA_PROSTOPADLOSCIENNA_HH



#include "interfejs.hh"
#include "Dr3D_gnuplot_api.hh"
#include "Prostopadloscian.hh"
#include "Przeszkoda.hh"
#include <unistd.h>
using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;



class przeszkoda_prost : public Przeszkoda , public Prostopadloscian
{

przeszkoda_prost() : Prostopadloscian(A,B,C){};

bool czy_przeszkoda(std::shared_ptr<interfejs> D) override;



};



#endif