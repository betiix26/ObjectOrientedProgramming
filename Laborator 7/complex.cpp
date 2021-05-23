#include "Complex.h"
#include<iostream>
#include<math.h>
#define CRT_NO_SECURE_WARNINGS
using namespace std;


void Complex::afiseaza()
{

	cout << re << "+" << im << "*i";

}

Complex Complex::operator +(Complex numar)
{
	Complex suma;

	suma.re = re + numar.re;
	suma.im = im + numar.im;

	return suma;
}


Complex Complex::operator -(Complex numar)
{
	Complex diferenta;

	diferenta.re = re - numar.re;
	diferenta.im = im - numar.im;

	return diferenta;
}


Complex Complex::operator *(Complex numar)
{
	Complex inmultire;

	inmultire.re = re * numar.re - im * numar.im;
	inmultire.im = im * numar.re + re * numar.im;

	return inmultire;
}


Complex Complex::operator /(Complex numar)
{
	Complex impartire;

	float z = numar.re * numar.re + numar.im * numar.im;

	impartire.re = (re * numar.re + im * numar.im) / z;
	impartire.im = (im * numar.re + re * numar.im) / z;

	return impartire;
}

Complex Complex::operator ~()
{
	return sqrt(pow(re, 2) + pow(im, 2));
}


Complex operator ^(const Complex& z, const int& putere)
{
	float r1, r2, im1, im2;
	Complex copie, iterator;

	int valoare = putere;

	iterator.re = 1;
	iterator.im = 1;

	copie.re = z.re;
	r1 = copie.re;

	copie.im = z.im;
	im1 = copie.im;

	copie.re = z.re;
	r2 = copie.re;

	copie.im = z.im;
	im2 = copie.im;

	iterator.re = iterator.re * ((r1 * r2) - (im1 * im2));
	iterator.im = iterator.im * ((r1 * im2) + (im1 * r2));

	for (int i = 0; i < valoare - 2; i++)
	{
		iterator.re = iterator.re * copie.re;
		iterator.im = iterator.im * copie.im;
	}
	return iterator;
}