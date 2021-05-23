#include<iostream>
#include"CList.h"
#include"CNod.h"

using namespace std;

/** Implementarea clasei Lista*/
CList::CList()
{
    prim = ultim = 0;
}


CList::~CList()
{
    Nod* p = prim;
    Nod* q;

    //se elibereaza spatiul de memorie rezervat elementelor listei/
    while (p != 0)
    {
        q = p;
        p = p->next;
        delete q;
    }
    prim = ultim = 0;
}


void CList::addElement(int n)
{
    Nod* p;
    Nod* iterator = prim;
    p = new Nod;
    p->cap = n;
    p->next = NULL;

    if (prim == NULL)
    {
        prim = p;
    }
    else
    {
        while (iterator->next != NULL)
        {
            iterator = iterator->next;
        }
        iterator->next = p;
    }
}


void CList::stergereElement(int valoare)
{
    Nod* iterator, * temp, * index = NULL;
    iterator = prim;
    temp = prim;

    while (iterator != NULL && iterator->cap != valoare)
    {
        temp = iterator;
        iterator = iterator->next;
    }
    if (iterator == NULL)
    {
        cout << valoare << "nu s a gasit ";
        delete index;
    }
    else
    {
        index = iterator;
        iterator = iterator->next;
        temp->next = iterator;
        if (index == prim)
        {
            prim = prim->next;
            temp = NULL;
        }
        delete index;
    }
}


void CList::afisare()
{
    Nod* aux;
    aux = prim;
    cout << "elementele listei sunt: ";
    while (aux != NULL)
    {
        cout << aux->cap << " ";
        aux = aux->next;
    }
    cout << endl;
}

void CList::eliminare(int val)
{
    Nod* aux;
    aux = prim;

    while (aux != NULL)
    {
        if (aux->cap < val)
        {
            stergereElement(aux->cap);
        }
        aux = aux->next;
        break;
    }
}


float CList::medie()
{
    float suma = 0, numar = 0;
    float media;
    Nod* aux;
    aux = prim;
    while (aux != NULL)
    {
        suma = suma + aux->cap;
        numar = numar + 1;
        aux = aux->next;
    }
    media = suma / numar;
    return media;
}