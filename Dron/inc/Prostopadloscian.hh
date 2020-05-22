#ifndef PROSTOPADLOSCIAN_HH
#define PROSTOPADLOSCIAN_HH

#include "Obiekt3D.hh"



class Prostopadloscian : public Obiekt3D
{
public:

double A;

double B;

double C; 

Prostopadloscian(){};

Prostopadloscian(double bokA, double bokB, double bokC);

int narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) override;

void pozycja(const Wektor3D &Wektor) ;

void ustaw_orientacje(const MacierzOB &Macierz) ;

void wspolrzedne(Wektor3D wsp[]) const;



};

#endif