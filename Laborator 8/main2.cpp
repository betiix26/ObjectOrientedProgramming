#include "CCaine2.h"
#include "CCaineFaraPete2.h"
#include "CCaineCuPete2.h"
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	while (true)
	{
		int alegere;
		cout << "0) Exit \n";
		cout << "1) Introduceti caine nespecificat \n";
		cout << "2) Introduceti caine fara pete \n";
		cout << "3) Introduceti caine cu pete \n";
		cout << "Introduceti alegerea dorita: "; 
		cin >> alegere;
		switch (alegere)
		{
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			CCaine2 catel;
			catel.citire();
			cout << '\n';
			catel.afisare();
			break;
		}
		case 2:
		{
			CCaine2* catel = new CCaineFaraPete2();
			catel->citire();
			cout << '\n';
			catel->afisare();
			delete catel;
			break;
		}
		case 3:
		{
			CCaine2* catel = new CCaineCuPete2();
			catel->citire();
			cout << '\n';
			catel->afisare();
			delete catel;
			break;
		}
		default:
		    cout << "Alegerea este gresita \n";
			break;
		}
		cout << "\n\n";
	}
}