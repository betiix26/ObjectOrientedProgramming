#include "isbn.h"
#include  <iostream>

using namespace std;

void ISBN::citeste_isbn() {
	cout << "Introduceti numarul ISBN: ";
	cin.get();
	cin >> isbn;
	cout << endl;
}

void ISBN::afiseaza_isbn() {
	cout << "Numarul ISBN este: " << isbn << endl;
}


int verifica_unicitatea(ISBN sir[], char* isbn) {
	int k = 0;

	for (int i = 0; i < 40; i++) {
		
		
		if (strcmp(sir[i].isbn, isbn) == 0)

			k++;
	}
	if (k)
		return 0;
	else return 1;

}
