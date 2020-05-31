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
double a,b,d;
int c;

std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-100,100,-100,100,-100,100,100)); /*włacza gnuplota, pojawia się scena [-5,5] x [-5,5] x [-5,5] odświeżana co 1000 ms*/  pod.narysuj(api);
api->change_ref_time_ms(0); //odświeżanie sceny zmienione na opcję "z każdym pojawieniem się lub zniknięciem kształtu"

D.rysuj_dron(api);
taf.narysuj(api);
pod.narysuj(api);
while(1){
cout <<"Wybierz opcje: "<< endl;
cout <<"1. Obroc drona"<< endl;;
cout <<"2. Porusz drona "<< endl;;
cout <<"3. Zakoncz dzialanie programu"<< endl;
cin >> c;
switch(c)
{
case 1:
cout <<"1. Podaj kat obrocenia:"<< endl;;
cin >> a;
D.obroc_dron(a,api);
cout<< endl;
break;
case 2:
cout <<"Podaj kat wznoszenia/opadania" <<endl;
cin>> d;
cout <<"Podaj dlugosc o jaka ma sie poruszyc dron: "<< endl;;
cin >> b;
D.plyn(b,d,api);
cout<< endl;
break;
case 3:
exit(1);
}
}
}
