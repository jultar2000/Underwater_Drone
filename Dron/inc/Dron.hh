#ifndef DRON_HH
#define DRON_HH



#include "Dr3D_gnuplot_api.hh"
#include "Prostopadloscian.hh"
#include "Graniastoslup.hh"
#include "interfejs.hh"
#include "Przeszkoda.hh"
#include "Wirnik.hh"
#include <unistd.h>

using std::enable_shared_from_this;
using drawNS::APIGnuPlot3D;



/**
 * @brief klasa modelujaca dron
 * 
 */


class Dron : public Prostopadloscian,public interfejs,public Przeszkoda
{
protected:

Wirnik lewy_wirnik;

Wirnik prawy_wirnik;

Wektor3D porusz_prawy;

Wektor3D porusz_lewy;



public: 

 
Dron(double AA,double BB,double CC);
/**
 * @brief obraca w osi x
 * 
 * @param kat 
 */
void obroc_x(double kat) override;
/**
 * @brief obraca w osi y
 * 
 * @param kat 
 */
void obroc_y(double kat) override;
/**
 * @brief obraca w osi z
 * 
 * @param kat 
 */
void obroc_z(double kat) override;
/**
 * @brief porusza drona 
 * 
 * @param dlugosc 
 * @param kat 
 */
void poruszaj(double dlugosc,double kat) override;
/**
 * @brief animuje poruszanie drona
 * 
 * @param dlugosc 
 * @param kat 
 * @param api 
 */
void plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api) override;
/**
 * @brief rysuje drona, wirniki i prostopadloscian
 * 
 * @param api 
 */
void rysuj_dron(std::shared_ptr<drawNS::Draw3DAPI> api) override;
/**
 * @brief obraca calego drona w osi z
 * 
 * @param kat 
 * @param api 
 */
void obroc_dron(double kat,std::shared_ptr<drawNS::Draw3DAPI> api) override;
/**
 * @brief obraca prawy wirnik
 * 
 */
void obroc_prawy_wirnik() override;
/**
 * @brief obraca lewy wirnik
 * 
 */
void obroc_lewy_wirnik() override;
/**
 * @brief funkcja definiujaca kolizje z przeszkoda
 * 
 * @param D 
 * @return true 
 * @return false 
 */
bool czy_przeszkoda(std::shared_ptr<interfejs> D) override;
/**
 * @brief funkcja obrotu obu wirnikow
 * 
 */
void obroc_wirniki() override;
/**
 * @brief zwraca srodek drona
 * 
 * @return Wektor3D 
 */
Wektor3D zwrot_srodek() override
{
return punkt_odn;
}
/**
 * @brief wylicza promien drona
 * 
 * @return double 
 */
double wez_promien() override;
/**
 * @brief zwraca wysokosc drona
 * 
 * @return double 
 */
double wez_wysokosc() override;

};






#endif
