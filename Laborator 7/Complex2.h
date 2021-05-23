#pragma once
#include <iostream>
#include <math.h>
#define CRT_NO_SECURE_WARNINGS
using namespace std;

class Complex
{
private:
	float real;
	float imaginar;

public:
	void afisare_rezultat();
	Complex(int x = 0, int y = 0);
	Complex operator  + (const Complex z);
	Complex operator  - (const Complex z);
	Complex operator  * (const Complex z);
	Complex operator  / (const Complex z);
	Complex operator ^ (const int n);
    float operator ~ ();
	


};

