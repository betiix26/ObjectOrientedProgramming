#pragma once
#include "CPunct.h"
#include "CDreapta.h"
class CPatrat:public CPunct, CDreapta 
{
private:
	CPunct punct;
	CDreapta latura;
public:
	CPatrat();
	~CPatrat();
	CPatrat(float x0, float y0, float x1, float y1);
	float getPerimetruPatrat(float x0, float y0, float x1, float y1);
	float getAriePatrat(float x0, float y0, float x1, float y1);
	float getLatura(float x0, float y0, float x1, float y1);
};

