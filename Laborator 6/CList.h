#include<iostream>
#include"CNod.h"

using namespace std;

class CList
{
public:
    Nod* prim; //retine primul element din lista
    Nod* ultim; //retine ultimul element din lista

    CList();
    ~CList();

    void addElement(int n);//adauga un element la sfarsitul listei
    void stergereElement(int valoare);
    void afisare();
    void eliminare(int val);
    float medie();
};