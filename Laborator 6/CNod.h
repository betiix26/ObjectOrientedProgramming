#pragma once
#ifndef _CNod
#define _CNod
#include <iostream>

using namespace std;

class CList;
class Nod
{

public:
    int cap;
    Nod* next;
    Nod();
    Nod(int cap, Nod* next = 0);
    int getCap();
    void setCap(int cap);
    Nod* getNext();
    void setNext(Nod* next);

    friend class CList;
};
#endif