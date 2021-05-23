#pragma once
#include "CPunct.h"
#include "CDreapta.h"
class CDreptunghi:public CPunct, CDreapta
{
private:
	CPunct punct1, punct2, punct3;
	CDreapta latime, lungime;
public:
	CDreptunghi();
	~CDreptunghi();
	CDreptunghi(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);
	float getPerimetruDreptunghi(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);
	float getArieDreptunghi(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);
	float getLatime(float x2, float y2, float x3, float y3);
    float getLungime(float x0, float y0, float x1, float y1);

};

