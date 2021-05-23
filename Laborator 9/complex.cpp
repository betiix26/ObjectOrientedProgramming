#include "complex.h"
#include "matrix.h"
using namespace std;

complex::complex(const complex& number)
{
	this->a = number.a;
	this->b = number.b;
}

complex complex:: operator^(const int p)
{
	int index = 0;
	complex aux(1, 0);
	if (!p)
	{
		return aux;
	}
	else
	{
		while (index++ < fabs(p))
		{
			aux *= *this;
		}

		if (p > 0) 
		{
			this->a = aux.a;
			this->b = aux.b;
			return aux;
		}
		else
		{
			complex aux_b(1, 0);
			aux = aux_b / aux;
			this->a = aux.a;
			this->b = aux.b;
			return aux;
		}
	}
}

std::ostream& operator<<(std::ostream& out, const complex& z)
{
	if (z.b < 0)
	{
		return out << z.a << ' ' << '-' << ' ' << fabs(z.b) << 'i';
	}
	else
	{
		return out << z.a << ' ' << '+' << ' ' << z.b << 'i';
	} 
}

std::istream& operator>>(std::istream& in, complex& z)
{
	in >> z.a >> z.b;
	return in;
}

complex complex:: operator=(const complex& aux)
{
	this->a = aux.a ;
	this->b = aux.b;
	return *this;
}

complex complex:: operator+=(const complex &aux)
{
	this->a += aux.a;
	this->b += aux.b;
	return *this;
}

complex complex:: operator-=(const complex &aux)
{
	this->a -= aux.a;
	this->b -= aux.b;
	return *this;
}

complex complex:: operator*=(const complex &aux)
{
	double rCopy = this->a, iCopy = this->b;
	this->a = this->a * aux.a - iCopy * aux.b;
	this->b = rCopy * aux.b + aux.a * iCopy;
	return *this;
}

complex complex:: operator/=(const complex &aux)
{
	double rCopy = this->a, iCopy = this->b;
	this->a = (rCopy * aux.a + iCopy * aux.b) / (aux.a * aux.a + aux.b * aux.b);
	this->b = (aux.a * iCopy - rCopy * aux.b) / (aux.a * aux.a + aux.b * aux.b);
	return *this;
}

bool complex::operator==(const complex &aux)
{
	return (this->a == aux.a) && (this->b == aux.b);
}

complex operator+(const complex& z1, const complex& z2)
{
	return complex(z1.a + z2.a, z1.b + z2.b);
}

complex operator-(const complex& z1, const complex& z2)
{
	return complex(z1.a - z2.a, z1.b - z2.b);
}

complex operator*(const complex& z1, const complex& z2)
{
	return complex(z1.a * z2.a - z1.b * z2.b, z1.a * z2.b + z2.a * z1.b);
}

complex operator/(const complex& z1, const complex& z2)
{
	return complex((z1.a * z2.a + z1.b * z2.b)/(z2.a * z2.a + z2.b * z2.b), (z2.a * z1.b - z1.a * z2.b) / (z2.a * z2.a+ z2.b * z2.b));
}

double operator~(const complex& z)
{
	return (sqrt(z.a * z.a + z.b * z.b));
}