#pragma once
#include "CCaine2.h"
using namespace std;
class CCaineCuPete2 : public CCaine2
{
public:
	CCaineCuPete2(string = "", string = "", float = 0, float = 0, pair<int, int> = make_pair(0, 0), int = 0);
	~CCaineCuPete2(void);
	void citire(void);
	void afisare(void);
private:
	int fara_pete;
};

