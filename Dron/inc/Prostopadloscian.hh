#ifndef PROSTOPADLOSCIAN
#define PROSTOPADLOSCIAN


#include "Obiekt3D.hh"



class Prostopadloscian : public Obiekt3D
{
public:

double A;

double B;

double C; 

Prostopadloscian();

Prostopadloscian(double bokA, double bokB, double bokC);

//int narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) const override;

//void pozycja(const Wektor3D &Wektor) override;

//void ustaw_orientacje(const MacierzOB &Macierz) override;


};

#endif