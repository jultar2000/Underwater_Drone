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
#include "Przeszkoda_prostopadloscienna.hh"
#include "interfejs.hh"


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
std::vector<std::shared_ptr<Przeszkoda> >kolekcja_przeszkod;
std::vector<std::shared_ptr<interfejs> >kolekcja_dronow;
std::shared_ptr<Dron> D(new Dron(27,20,10));
std::shared_ptr<Dron> D1(new Dron(15,15,15));
std::shared_ptr<Dron> D_abs(new Dron(0,0,0));
std::shared_ptr<przeszkoda_prost> P(new przeszkoda_prost(10,40,60));
std::shared_ptr<tafla> taf(new tafla());
std::shared_ptr<Podloze> pod(new Podloze());
Wektor3D W(40,40,40);
Wektor3D W2(70,-30,20);
double a,b,d,k;
int c;
D1->pozycja(W);
P->pozycja(W2);
std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-100,100,-100,100,-100,100,100)); /*włacza gnuplota, pojawia się scena [-5,5] x [-5,5] x [-5,5] odświeżana co 1000 ms*/  pod->narysuj(api); 
api->change_ref_time_ms(0); //odświeżanie sceny zmienione na opcję "z każdym pojawieniem się lub zniknięciem kształtu"



kolekcja_przeszkod.push_back(taf);
kolekcja_przeszkod.push_back(pod);
kolekcja_przeszkod.push_back(P);
kolekcja_przeszkod.push_back(D);
kolekcja_przeszkod.push_back(D1);


bool kolizja = false;
D_abs=D;
P->narysuj(api);
D->rysuj_dron(api);
D1->rysuj_dron(api);
taf->narysuj(api);
pod->narysuj(api);

while(1){
cout <<"Wybierz opcje: "<< endl;
cout <<"1. Obroc drona"<< endl;
cout <<"2. Porusz drona "<< endl;
cout <<"3. Wybierz drona"<< endl;
cout <<"4. Zakoncz dzialanie programu" << endl;
cin >> c;
switch(c)
{
case 1:
cout <<"1. Podaj kat obrocenia:"<< endl;
cin >> a;
D_abs->obroc_dron(a,api);
cout<< endl;
break;
case 2:
cout <<"Podaj kat wznoszenia/opadania" <<endl;
cin>> d;
cout <<"Podaj dodatnia dlugosc o jaka ma sie poruszyc dron: "<< endl;
cin >> b;
for(double j=0;j<=b;j++)
{
for(auto elem: kolekcja_przeszkod)
  {
  kolizja=elem-> czy_przeszkoda(D_abs);
  if(kolizja==true)
  {
    D_abs->plyn(-1,d,api);
    break;
  }
  }
   if(kolizja==false)
    {
      D_abs->plyn(1,d,api);
    }
    else
    {
      cout <<"Uwaga przeszkoda!"<<endl;
      break;
    }
}
break;
case 3:
cout <<"Wybierz numer drona:";
cin >> k;
if(k==1)
{
  D_abs=D;
}
if(k==2)
{
  D_abs=D1;
}
break;
case 4:
exit(1);
  }
 }
}
