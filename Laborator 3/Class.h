
#pragma once
using namespace std;

class Class
{ 
public:
	char titlu[50];
	char autor1[50];
	char autor2[50];
	char editura[50];
	char nr_ISBN[50];
	char anul_aparitiei[50];
	float pret;

	void citeste_carte();
	void afiseaza_carte();

};