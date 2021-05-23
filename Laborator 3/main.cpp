#pragma warning(disable 4996)

#include<iostream>

#include "Class.h"
using namespace std;

int main()
{
	int i;

	Class carte[50];

	int alegere, numar;

	do
	{
		cout << "1. Citeste carti" << endl;
		cout << "2. Afiseaza carti" << endl;
		cout << "3. Cauta cartea" << endl;
		cout << "4. Exit" << endl;
		cout << endl;
		cout << "Alegerea facuta: " << endl;
		cin >> alegere;

		switch (alegere)
		{
		case 1:
			cout << "Nr de carti: " << endl;
			cin >> numar;
			for (int i = 0; i < numar; i++)// citeste cartile
				carte[i].citeste_carte();
			break;
		case 2:
			//afiseaza lista cu cartile disponibile
			for (int i = 0; i < numar; i++)
				carte[i].afiseaza_carte();
			break;
		case 3:
			//cauta cartea
			char titlul_cartii[50], editura[50], nr_ISBN[50];
			cout << "cauta dupa titulul cartii ";
			cin >> titlul_cartii;
			if (strcmp(titlul_cartii, "-1") == 0)
			{
				cout << "cauta dupa editura ";
				cin >> editura;

				if (strcmp(editura, "-1") == 0)
				{
					cout << "cauta dupa nr ISBN ";
					cin >> nr_ISBN;
				}
			}

			for (i = 0; i < numar; i++)
			{
				if (strcmp(titlul_cartii, carte[i].titlu) == 0 || strcmp(editura, carte[i].editura) == 0 || strcmp(nr_ISBN, carte[i].nr_ISBN) == 0)
				{
					cout << "Cartile disponibile sunt: " << endl;
					cout << "Numele cartii: " << carte[i].titlu << endl;
					cout << "Autorul este: " << carte[i].autor1 << endl;
					cout << "Editura este: " << carte[i].editura << endl;
					cout << "Nr ISBN este: " << carte[i].nr_ISBN << endl;
					cout << "Anul aparitiei este: " << carte[i].anul_aparitiei << endl;
					cout << "Pretul cartii este: " << carte[i].pret << endl;
					cout << endl;

				}
				else
				{
					cout << "Alegerea facuta nu exista" << endl;
					break;
				}

			} break;

		default:cout << "Introduceti o alegere valida: " << endl;
			break;
		case 4: exit(1);
		}
	} while (1);
}