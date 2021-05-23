#include<iostream>
#include"contor_aparitii_sir.h"
using namespace std;

#define _CRT_NO_WARNINGS

int main()
{
	char s1[100], s2[100];

	cout << "primul sir este: " << " ";

	cin.get(s1, 100);
	cin.get();

	cout << "al doilea sir este: " << " ";

	cin.get(s2, 100);
	cin.get();

	cout << "nr aparitii este: ";

	cout << cautare(s1, s2);

}