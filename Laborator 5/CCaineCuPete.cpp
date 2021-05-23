#include"CCaineCuPete.h"
#include"CCaine.h"
#include<iostream>

using namespace std;

void CCaineCuPete::Citire_nr_pete()
{
	cout << "Introduceti nr pete: " << endl;
	cin >> nr_pete;
}

void CCaineCuPete::Afisare_nr_pete()
{
	cout << "Nr de pete este: " << nr_pete << endl;
}
void CCaineCuPete::verificare_nr_pete()
{
	if (nr_pete == 0)
	{
		cout << "Cainele nu are pete" << endl;
	}
	else
	{
		cout << "Cainele are pete" << endl;
	}
}
