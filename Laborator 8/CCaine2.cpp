#include "CCaine2.h"
#include <iostream>
#include <string>
using namespace std;
CCaine2::CCaine2(string _nume, string _culoare, float _greutate, float _inaltime, pair<int, int> _varsta)
{
	this->nume = _nume;
	this->culoare = _culoare;
	this->greutate = _greutate;
	this->inaltime = _inaltime;
	this->varsta = _varsta;
}

CCaine2::~CCaine2(void)
{
	this->nume.clear();
	this->culoare.clear();
}

void CCaine2::citire(void)
{
	cout << "Nume: "; 
	cin >> this->nume;
	cout << "Culoare: "; 
	cin >> this->culoare;
	cout << "Greutate: "; 
	cin >> this->greutate;
	cout << "Inaltime: "; 
	cin >> this->inaltime;
	cout << "Varsta(ani si luni): "; 
	cin >> this->varsta.first >> this->varsta.second;
}

void CCaine2::afisare(void)
{
	cout << "Nume: " << this->nume << '\n';
	cout << "Culoare: " << this->culoare << '\n';
	cout << "Greutate: " << this->greutate << " kg" << '\n';
	cout << "Inaltime: " << this->inaltime << " metri" << '\n';
	cout << "Varsta: " << this->varsta.first << " ani si " << this->varsta.second << " luni\n";
}