#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class complex
{
public:
	complex(double x = 0.0, double y = 0.0) : a(x), b(y) {}
	complex(const complex&);
	complex operator=(const complex&);
	complex operator+=(const complex &);
	complex operator-=(const complex &);
	complex operator*=(const complex &);
	complex operator/=(const complex &);
	bool operator==(const complex &);
	complex operator^(const int p);
private:
	double a, b;
	friend complex operator+(const complex&, const complex&);
	friend complex operator-(const complex&, const complex&);
	friend complex operator*(const complex&, const complex&);
	friend complex operator/(const complex&, const complex&);
	friend double operator~(const complex&);
	friend std::ostream& operator<<(std::ostream&, const complex&);
	friend std::istream& operator>>(std::istream&, complex&);
};

