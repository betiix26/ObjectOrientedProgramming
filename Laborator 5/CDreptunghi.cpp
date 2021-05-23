#include "CDreptunghi.h"
#include "CPunct.h"
#include "CDreapta.h"
#include<iostream>
using namespace std;

CDreptunghi::CDreptunghi() :CPunct(), punct1(), punct2(), punct3()
{

}
CDreptunghi::~CDreptunghi()
{

}
CDreptunghi::CDreptunghi(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3) :CPunct(x0, y0), punct1(x1, y1), punct2(x2, y2), punct3(x3, y3)
{

}
float CDreptunghi::getPerimetruDreptunghi(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
{
	return 2 * ( getLungime(x2, y2, x3, y3) * getLatime(x0, y0, x1, y1) );
}
float CDreptunghi::getArieDreptunghi(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
{
	return getLungime(x2, y2, x3, y3) * getLatime(x0, y0, x1, y1);
}
float CDreptunghi::getLatime(float x2, float y2, float x3, float y3)
{
	cout << "\n Latimea dreptunghiului= " << latime.getDreapta(x2, y2, x3, y3);
	return latime.getDreapta(x2, y2, x3, y3);
}
float CDreptunghi::getLungime(float x0, float y0, float x1, float y1)
{
	cout << "\n Lungimea dreptunghiului= " << lungime.getDreapta(x0, y0, x1, y1);
	return lungime.getDreapta(x0, y0, x1, y1);
}

