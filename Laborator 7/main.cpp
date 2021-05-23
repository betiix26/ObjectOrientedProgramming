#include<iostream>
#include"Complex.h"
#include<math.h>
#define CRT_NO_SECURE_WARNINGS
using namespace std;

int main()
{
	Complex z1, z2(5),z3(2,3),z4=z2, z, sum, tab[3][3] = {8,16,12,2,4,6};

	cout << "Rezultatul operatiei de adunare este: " << endl;
	z = z1 + z2;
	z.afiseaza();
	cout << endl;
	(z3 + z4).afiseaza();
	cout << endl;

	cout << endl;
	cout << "Rezultatul operatiei de scadere este: " << endl;
	z = z1 - z2;
	z.afiseaza();
	cout << endl;
	(z3 - z4).afiseaza();
	cout << endl;

	cout << endl;
	cout << "Rezultatul operatiei de inmultire este: " << endl;
	z = z1 * z2;
	z.afiseaza();
	cout << endl;
	(z3*z4).afiseaza();
	cout << endl;

	cout << endl;
	cout << "Rezultatul operatiei de impartire este: " << endl;
	z = z1 / z2;
	z.afiseaza();
	cout << endl;
	(z3/z4).afiseaza();
	cout << endl;
	cout << endl;

	cout << "Modulul numerelor este: " << endl;
	(~z1).afiseaza();
	cout << endl;
	(~z2).afiseaza();
	cout << endl;
	(~z3).afiseaza();
	cout << endl;
	(~z4).afiseaza();
	cout << endl;
	cout << endl;

	cout << "Operatia de ridicare a numerelor complexe la o putere intreaga este: " << endl;
	(z1 ^ 2).afiseaza();
	cout << endl;
	(z2 ^ 2).afiseaza();
	cout << endl;
	(z3^2).afiseaza();
	cout << endl;
	(z4 ^ 2).afiseaza();
	cout << endl;

	int numar;
	Complex numitor(12,4), numarator(6,8);

	cout << "Tabloul are valoarea: " << endl;
	cin >> numar;

	cout << "Elementele tabloului sunt: "<<endl;

	for (int i = 1; i <= numar; i++)
	{
		tab[i][i].afiseaza();
		cout << endl;
		if (i % 2 != 0)
		{
			tab[i][i] = tab[i][i] ^ 3;
			numarator = numarator + tab[i][i];
		}
		else if (i % 2 == 0)
		{
			tab[i][i] = tab[i][i] ^ 4;
			numitor = numitor + tab[i][i];
		}
		sum = numarator / numitor;
	}
	cout << "Expresia este egala cu: ";
	sum.afiseaza();
	cout << endl;
	return 0;
}