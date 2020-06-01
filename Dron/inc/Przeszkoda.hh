#ifndef PRZESZKODA_HH
#define PRZESZKODA_HH



#include "interfejs.hh"
#include "Dr3D_gnuplot_api.hh"
#include "Wektor.hh"
#include "MacierzOB.hh"

class interfejs;

class Przeszkoda 
{

public:



virtual bool czy_przeszkoda(std::shared_ptr<interfejs> D)=0;

};


#endif









