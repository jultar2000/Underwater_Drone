#include "Podloze.hh"


using namespace std;



void Podloze::narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) 
{

jd=api->draw_surface(vector<vector<Point3D> > {{

	drawNS::Point3D(-100,-100,-100), drawNS::Point3D(100,-100,-100), drawNS::Point3D(100,100,-100),
	
	drawNS::Point3D(-100,100,-100), drawNS::Point3D(-100,-100,-100)  
},{
drawNS::Point3D(50,100,-100),drawNS::Point3D(50,-100,-100)
},{
drawNS::Point3D(-50,100,-100),drawNS::Point3D(-50,-100,-100)
},{
drawNS::Point3D(-25,100,-100),drawNS::Point3D(-25,-100,-100)
},{
drawNS::Point3D(25,100,-100),drawNS::Point3D(25,-100,-100)
},{
drawNS::Point3D(75,100,-100),drawNS::Point3D(75,-100,-100)
},{
drawNS::Point3D(-75,100,-100),drawNS::Point3D(-75,-100,-100)
},{
drawNS::Point3D(0,100,-100),drawNS::Point3D(0,-100,-100)
},{
drawNS::Point3D(100,50,-100),drawNS::Point3D(-100,50,-100)
},{
drawNS::Point3D(100,75,-100),drawNS::Point3D(-100,75,-100)
},{
drawNS::Point3D(100,25,-100),drawNS::Point3D(-100,25,-100)
},{
drawNS::Point3D(100,-50,-100),drawNS::Point3D(-100,-50,-100)
},{
drawNS::Point3D(100,-75,-100),drawNS::Point3D(-100,-75,-100)
},{
drawNS::Point3D(100,-25,-100),drawNS::Point3D(-100,-25,-100)
},{
drawNS::Point3D(100,0,-100),drawNS::Point3D(-100,0,-100)
}	     
	  },"yellow");
	
}


bool Podloze::czy_przeszkoda(std::shared_ptr<interfejs> D)
{
double a=D->wez_wysokosc();


double epsilon=-100;
      if(D->zwrot_srodek()[2]-a<epsilon)
	  {
		return true;
	  }		
else
{
return false;
}
}
 