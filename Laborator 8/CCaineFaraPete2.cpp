#include "CCaineFaraPete2.h"
#include "CCaine2.h"
#include <iostream>
using namespace std;
void CCaineFaraPete2::afisare(void)
{
	CCaine2::afisare();
	cout << "Cainele nu are pete " << '\n';
}

CCaineFaraPete2::CCaineFaraPete2(string _nume, string _culoare, float _greutate, float _inaltime, pair<int, int> _varsta)
{
	this->nume = _nume;
	this->culoare = _culoare;
	this->greutate = _greutate;
	this->inaltime = _inaltime;
	this->varsta = _varsta;
}

CCaineFaraPete2::~CCaineFaraPete2(void)
{
	this->nume.clear();
	this->culoare.clear();
}
