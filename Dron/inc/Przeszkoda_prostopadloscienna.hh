#ifndef PRZESZKODA_PROSTOPADLOSCIENNA_HH
#define PRZESZKODA_PROSTOPADLOSCIENNA_HH




#include "Prostopadloscian.hh"
#include "Przeszkoda.hh"
#include "interfejs.hh"





class przeszkoda_prost : public Prostopadloscian , public Przeszkoda
{
public:

przeszkoda_prost(double AA,double BB,double CC);

bool czy_przeszkoda(std::shared_ptr<interfejs> D) override;

};


#endif



