#include<iostream>

#define CRT_NO_SECURE_WARNINGS
using namespace std;
class Complex
{
private:

	float re;
	float im;

public:
	
	Complex(float a = 0, float b = 0)
	{
		cout << "s-a apelat constructorul clasei Complex " << endl;
		re = a;
		im = b;
    }

	void afiseaza();
	Complex operator +(const Complex numar);
	Complex operator -(const Complex numar);
	Complex operator *(const Complex numar);
	Complex operator /(const Complex numar);

	Complex operator ~();
	friend Complex operator ^(const Complex&, const int&);
}; 
