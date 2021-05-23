#include "Complex2.h"
#define CRT_NO_SECURE_WARNINGS
Complex::Complex(int x, int y)
{
	cout << "s-a apelat constructorul" << endl;
	real = x;
	imaginar = y;
	cout << endl;
}

Complex Complex::operator+(const Complex z)					//supraincarcarea operatorului +
{
	Complex rezultat(real + z.real, imaginar + z.imaginar);
	return rezultat;
}

Complex Complex::operator-(const Complex z)					//supraincarcarea operatorului -
{
	Complex rezultat(real - z.real, imaginar - z.imaginar);
	return rezultat;
}

Complex Complex::operator*(const Complex z)						//supraincarcarea operatorului *
{
	Complex rezultat((real * z.real) - (imaginar * z.imaginar), (real * z.imaginar) + (z.real * imaginar));
	return rezultat;
}

Complex Complex::operator/(const Complex z)							//supraincarcarea operatorului /
{
	Complex rezultat;
	rezultat.real = ((real * z.real) + (imaginar * z.imaginar)) / (pow(z.real, 2) + pow(z.imaginar, 2));
	rezultat.imaginar = ((z.real * imaginar) - (real * z.imaginar)) / (pow(z.real, 2) + pow(z.imaginar, 2));

	return rezultat;
}

Complex Complex::operator^(const int n)								//supraincarcarea operatorului ^
{
	Complex aux = *this;
	Complex rezultat = *this;

	for (int i = 1; i < n; i++)
	{
		rezultat = rezultat * aux;
	}
	return rezultat;
}

float Complex::operator~()				//supraincarcarea operatorului ~ (modul)
{
	float rezultat = sqrt(pow(real, 2) + pow(imaginar, 2));
	return rezultat;
}

void Complex::afisare_rezultat()
{
	if (imaginar > 0)
	{
		cout << real << " + " << imaginar << "i " << endl;
	}
	else
	{
		cout << imaginar << "i " << endl;
	}
}
