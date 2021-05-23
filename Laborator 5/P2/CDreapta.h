#pragma once
#include "CPunct.h"
class CDreapta :public CPunct
{
private:

	CPunct p1;

public:
	CDreapta(); 
	~CDreapta();
	CDreapta(float x0, float y0, float x1, float y1);
	float getPerimetru();
	float getDreapta(float x0, float y0, float x1, float y1);
};

