#include "tafla_wody.hh"

using namespace std;




void tafla::narysuj(std::shared_ptr<drawNS::Draw3DAPI> api) 
{
	cout <<"twoja stara";
jd=api->draw_surface(vector<vector<Point3D> > {{

drawNS::Point3D(-100,-100,100), drawNS::Point3D(100,-100,100), drawNS::Point3D(100,100,100),
	
drawNS::Point3D(-100,100,100), drawNS::Point3D(-100,-100,100)  
},{
drawNS::Point3D(50,100,100),drawNS::Point3D(50,-100,100)
},{
drawNS::Point3D(-50,100,100),drawNS::Point3D(-50,-100,100)
},{
drawNS::Point3D(-25,100,100),drawNS::Point3D(-25,-100,100)
},{
drawNS::Point3D(25,100,100),drawNS::Point3D(25,-100,100)
},{
drawNS::Point3D(75,100,100),drawNS::Point3D(75,-100,100)
},{
drawNS::Point3D(-75,100,100),drawNS::Point3D(-75,-100,100)
},{
drawNS::Point3D(0,100,100),drawNS::Point3D(0,-100,100)
},{
drawNS::Point3D(100,50,100),drawNS::Point3D(-100,50,100)
},{
drawNS::Point3D(100,75,100),drawNS::Point3D(-100,75,100)
},{
drawNS::Point3D(100,25,100),drawNS::Point3D(-100,25,100)
},{
drawNS::Point3D(100,-50,100),drawNS::Point3D(-100,-50,100)
},{
drawNS::Point3D(100,-75,100),drawNS::Point3D(-100,-75,100)
},{
drawNS::Point3D(100,-25,100),drawNS::Point3D(-100,-25,100)
},{
drawNS::Point3D(100,0,100),drawNS::Point3D(-100,0,100)
}


},"blue");
	 
}
