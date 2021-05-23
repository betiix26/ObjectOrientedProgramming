#pragma once
#include <iostream>
#include <fstream>
#include <vector> 
using namespace std;
//aici s-ar putea folosi sablonul Abstract Factory astfel:
 // - o clasa Continut, abstracta, si alta derivata din ea: cu nava sau fara nava
//  -o clasa abstracta, Culoare, cu clasele derivate: Alba, Albastra sau Rosie

 
class Board
{
public:
	Board(const int& = 10);
	~Board(void);
	int& getPoint(const pair<int, int>&);
	unsigned int getSize(void) const;
	void show(const char&) const;
	void display(const char&) const;
	bool valid(const pair<int, int>&) const;
	void save(ofstream&) const;
	void load(ifstream&);
private:
	vector<vector<int>> _table;
};