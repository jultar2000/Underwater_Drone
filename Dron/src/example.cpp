#include <iostream>
#include "Dr3D_gnuplot_api.hh"
#include "Macierz.hh"
#include "Wektor.hh"
#include "MacierzOB.hh"
#include "Prostopadloscian.hh"
#include "Dron.hh"
#include "Plaszczyzna.hh"
#include "Podloze.hh"
#include "tafla_wody.hh"
#include "Graniastoslup.hh"



using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;
using std::cin;


void wait4key() {
  do {
    std::cout << "\n Press a key to continue..." << std::endl;
  } while(std::cin.get() != '\n');
}



int main() {

Dron D(27,20,15);
tafla taf;
Podloze pod;


std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-200,200,-200,200,-200,200,200)); //włacza gnuplota, pojawia się scena [-5,5] x [-5,5] x [-5,5] odświeżana co 2000 ms
api->change_ref_time_ms(0); //odświeżanie sceny zmienione na opcję "z każdym pojawieniem się lub zniknięciem kształtu"

pod.narysuj(api);
taf.narysuj(api);
D.rysuj_dron(api);
//gran.narysuj(api);
//D.obroc_anim(45,api);
//wait4key();
//D.obroc_anim(60,api);
//wait4key();
wait4key();

D.plyn(50,45,api);
wait4key();
D.plyn(50,45,api);

wait4key();


}
