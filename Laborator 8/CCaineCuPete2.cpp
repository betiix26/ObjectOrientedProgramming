#include "CCaineCuPete2.h"
#include "CCaine2.h"
#include <iostream>
#include <string>
using namespace std;
CCaineCuPete2::CCaineCuPete2(string _nume, string _culoare, float _greutate, float _inaltime, pair<int, int> _varsta, int _fara_pete)
{
	this->nume = _nume;
	this->culoare = _culoare;
	this->greutate = _greutate;
	this->inaltime = _inaltime;
	this->varsta = _varsta;
	this->fara_pete = _fara_pete;
}

CCaineCuPete2::~CCaineCuPete2(void)
{
	this->nume.clear();
	this->culoare.clear();
}

void CCaineCuPete2::citire(void)
{
	CCaine2::citire();
	cout << "Numar pete: "; 
	cin >> this->fara_pete;

}

void CCaineCuPete2::afisare(void)
{
	CCaine2::afisare();
	if (!this->fara_pete)
	{
		cout << "Cainele nu are pete" << '\n';
	}
	else
	{
		cout << "Cainele are " << this->fara_pete << " pete\n";
	}
}
