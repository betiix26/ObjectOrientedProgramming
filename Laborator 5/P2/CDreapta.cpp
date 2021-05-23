#include "CDreapta.h"
#include "math.h"
CDreapta::CDreapta() : CPunct()
{

}

CDreapta::~CDreapta()
{

}

CDreapta::CDreapta(float x0, float y0, float x1, float y1) : CPunct(x0, y0), p1(x1,y1)
{
}

float CDreapta::getPerimetru()
{
	return 0.f;
}
float CDreapta::getDreapta(float x0, float y0, float x1, float y1)
{
	return sqrt( (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) );
};
