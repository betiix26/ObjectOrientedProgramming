#pragma once
#include"isbn.h"

class Carte
{

private:

	char autor1[40];
	char autor2[40];
	char anul_aparitiei[40];
	float pret;

public:

	char titlu[40];
	char editura[40];
	char nr_ISBN[40];


	void citeste_carte();
	void afiseaza_carte();
};