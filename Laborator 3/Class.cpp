#include "Class.h"
#include<iostream>
using namespace std;

void Class::citeste_carte()
{ 
	cout << "Titlul cartii: ";
	cin >> titlu;

	cout << "Primul autor: ";
	cin >> autor1;

	cout << "Al doilea autor: ";
	cin >> autor2;

	cout << "Editura: ";
	cin >> editura;

	cout << "Nr ISBN: ";
	cin >> nr_ISBN;

	cout << "Anul aparitiei: ";
	cin >> anul_aparitiei;

	cout << "Pretul: ";
	cin >> pret;

	cout << endl;
}

void Class::afiseaza_carte()
{
	cout << "Titlul cartii este: " << titlu << endl;
	cout << "Primul autor al cartii este: " << autor1 << endl;
	cout << "Al doilea autor al cartii este: " << autor2 << endl;
	cout << "Editura cartii este: " << editura << endl;
	cout << "Nr ISBN al cartii este: " << nr_ISBN << endl;
	cout << "Anul aparitiei cartii este: " << anul_aparitiei << endl;
	cout << "Pretul cartii este: " << endl;
}