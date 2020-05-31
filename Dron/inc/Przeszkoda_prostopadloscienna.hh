#ifndef PRZESZKODA_PROSTOPADLOSCIENNA_HH
#define PRZESZKODA_PROSTOPADLOSCIENNA_HH




#include "Prostopadloscian.hh"
#include "Przeszkoda.hh"



class przeszkoda_prost : public Przeszkoda , public Prostopadloscian
{
public:

przeszkoda_prost() : Prostopadloscian(A,B,C){};

bool czy_przeszkoda(std::shared_ptr<interfejs> D) override;

};



#endif