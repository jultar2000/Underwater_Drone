#ifndef INTERFEJS_HH
#define INTERFEJS_HH





class interfejs
{
public:

interfejs(){};

virtual void obroc_x(double kat)=0;

virtual void obroc_y(double kat)=0;

virtual void obroc_z(double kat)=0;

virtual void poruszaj(double dlugosc,double kat)=0;

virtual void obroc_anim_z(double kat,std::shared_ptr<drawNS::Draw3DAPI> api)=0;

virtual void rysuj_dron(std::shared_ptr<drawNS::Draw3DAPI> api)=0;

virtual void plyn(double dlugosc,double kat,std::shared_ptr<drawNS::Draw3DAPI> api)=0;


};


#endif
