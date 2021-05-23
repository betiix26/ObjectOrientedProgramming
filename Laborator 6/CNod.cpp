
#include "CNod.h"
#include<iostream>

using namespace std;

class Nod;
/*Constructor implicit*/
Nod::Nod()
{
    next = 0;
}

/*Constructor de initializare*/
Nod::Nod(int cap, Nod* next)
{
    this->cap = cap;
    this->next = next;
}


int Nod::getCap()
{
    return cap;
}

void Nod::setCap(int cap)
{
    this->cap = cap;
}

Nod* Nod::getNext()
{
    return next;
}

void Nod::setNext(Nod* next)
{
    this->next = next;
}
