#include "CCerc.h"
#include "CDreapta.h"
#include "CPunct.h"
#include<iostream>
using namespace std;
CCerc::CCerc(): CPunct(), c1()
{

}
CCerc::~CCerc()
{

}
CCerc::CCerc(float x0, float y0, float x1, float y1):CPunct(x0,y0), c1(x1,y1)
{

}
float CCerc::getPerimetruCerc(float x0, float y0, float x1, float y1)
{
	cout << "\n Raza cercului= " << getRaza(x0, y0, x1, y1) << endl;
	return 2 * 3.14 * getRaza(x0, y0, x1, y1);
}
float CCerc::getArieCerc(float x0, float y0, float x1, float y1)
{
	return 3.14 * getRaza(x0, y0, x1, y1) * getRaza(x0, y0, x1, y1);
}
float CCerc::getRaza(float x0, float y0, float x1, float y1)
{
	return raza.getDreapta(x0, y0, x1, y1);
}