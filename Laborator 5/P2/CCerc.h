#pragma once
#include "CPunct.h"
#include "CDreapta.h"
class CCerc :public CPunct, CDreapta
{
private:
	CDreapta raza;
	CPunct c1;
public:
	CCerc();
	~CCerc();
	CCerc(float x0, float y0, float x1, float y1);
	float getPerimetruCerc(float x0, float y0, float x1, float y1);
	float getArieCerc(float x0, float y0, float x1, float y1);
	float getRaza(float x0, float y0, float x1, float y1);
};

