#include "tafla_wody.hh"




void ustaw_poziom(double poz)
{

}



int tafla::narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) 
{
int x;	
x=api->draw_surface(vector<vector<Point3D> > {{

	drawNS::Point3D(-1000,-1000,1000), drawNS::Point3D(1000,-1000,1000), drawNS::Point3D(1000,1000,1000)
	  },{
	drawNS::Point3D(-1000,-1000,1000), drawNS::Point3D(-1000,1000,1000), drawNS::Point3D(1000,1000,1000)       
	  }	      
	  },"grey");
	  return x;
}

