#include <iostream>
#include "Complex2.h"
#include <vector>
#define CRT_NO_SECURE_WARNINGS
using namespace std;

int main()
{
	//vector<Complex>v;										
	Complex z1(2, 1);										
	Complex z2(5, 3);										
	Complex z3(2, 3);
	Complex z4 = z2;
/*
	v.push_back(z1);
	v.push_back(z2);
	v.push_back(z3);
	v.push_back(z4);
*/
	cout << endl;
	(z1 + z2).afisare_rezultat();
	cout << endl;

	Complex suma1(2,1);
	Complex suma2(1,0);
	Complex rezultat,tab[70];
	int nr;
	cin >> nr;

	for (int i = 1; i <=nr ; i++)
	{
		if (i % 2 != 0)
		{
			tab[i] = tab[i] ^ 3;
			suma1 = suma1 +tab[i];
		}

	    else if (i % 2 == 0)
		{
			tab[i] = tab[i] ^ 4;
			suma2 = suma2 + tab[i];
		}
	}
	rezultat = suma1 / suma2;
	cout << endl;
	rezultat.afisare_rezultat();
	cout << endl;

}