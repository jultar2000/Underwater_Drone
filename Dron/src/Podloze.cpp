#include "Podloze.hh"
using namespace std;






int Podloze::narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) const
{
int x;	
x=api->draw_surface(vector<vector<Point3D> > {{

	drawNS::Point3D(-1000,-1000,-1000), drawNS::Point3D(1000,-1000,-1000), drawNS::Point3D(1000,1000,-1000)
	  },{
	drawNS::Point3D(-1000,-1000,-1000), drawNS::Point3D(-1000,1000,-1000), drawNS::Point3D(1000,1000,-1000)       
	  }	      
	  },"grey");
	  return x;
}





