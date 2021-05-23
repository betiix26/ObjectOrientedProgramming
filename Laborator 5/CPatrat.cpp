#include "CPatrat.h"
#include "CDreapta.h"
#include "CPunct.h"
#include<iostream>
using namespace std;
CPatrat::CPatrat() :CPunct(), punct()
{

}
CPatrat::~CPatrat()
{

}
CPatrat::CPatrat(float x0, float y0, float x1, float y1) :CPunct(x0, y0), punct(x1, y1)
{

}
float CPatrat::getPerimetruPatrat(float x0, float y0, float x1, float y1)
{
	cout << "\n Latura patratului= " << getLatura(x0, y0, x1, y1) << endl;
	return 4 * getLatura(x0, y0, x1, y1);
}
float CPatrat::getAriePatrat(float x0, float y0, float x1, float y1)
{
	return getLatura(x0, y0, x1, y1) * getLatura(x0, y0, x1, y1);
}
float CPatrat::getLatura(float x0, float y0, float x1, float y1)
{
	return latura.getDreapta(x0, y0, x1, y1);
}