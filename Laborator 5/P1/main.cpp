#include"CCaine.h"
#include"CCaineCuPete.h"
#include"CCaineFaraPete.h"
#include<iostream>

#define _CRT_SECURE_NO_WARNINGS

int numar;
using namespace std;

int main()
{
	CCaine date[50];
	CCaineCuPete pete[50]; 
	//CCaineFaraPete fara_pete[50];

	int alegere;
	do
	{
		cout << endl;
		cout << "1.Citeste informatii despre caini " << endl;
		cout << "2.Afiseaza informatii despre caini " << endl;
		cout << "3.Citeste nr de pete " << endl;
		cout << "4.Verifica daca are pete" << endl;
		cout << "5.Exit" << endl;
		cout << endl;


		cin >> alegere;
		cout << endl;

		switch (alegere)
		{
		case 1:
			cout << endl;
			cout << "Introduceti nr caini: " << endl;
			cin >> numar;
			cout << endl;

			for (int i = 0; i < numar; i++)
			{
				date[i].Citire();
			}
			break;
		case 2:
			for (int i = 0; i < numar; i++)
			{
				date[i].Afisare();
			}
			break;
		case 3:
			for (int i = 0; i < numar; i++)
			{
				pete[i].Citire_nr_pete();
			}
			break;
		case 4:
			for (int i = 0; i < numar; i++)
			{
				pete[i].verificare_nr_pete();

			}
			break;
		case 5: exit(1);
		}
	} while (1);
}
