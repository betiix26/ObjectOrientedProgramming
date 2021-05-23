#pragma once
#include <iostream>
#include <string>
using namespace std;
class CCaine2
{
protected:
	string nume, culoare;
	float greutate, inaltime;
	pair<int, int> varsta;
public:
	CCaine2(string = "", string = "", float = 0, float = 0, pair<int, int> = make_pair(0, 0));
	~CCaine2(void);
	virtual void citire(void);
	virtual void afisare(void);
};