#pragma once
#include "CCaine2.h"
#include <string>
using namespace std;
class CCaineFaraPete2 : public CCaine2
{
public:
	CCaineFaraPete2(string = "", string = "", float = 0, float = 0, pair<int, int> = make_pair(0, 0));
	~CCaineFaraPete2(void);
	void afisare(void) ;
};