#pragma once
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

class matrix
{
public:
	matrix(int n)
	{
		_matrix.resize(n);
		for (auto& iterator : _matrix)
		{
			iterator.resize(n);
		}
	}
	matrix(void){ }

	~matrix(void)
	{
		for (auto& iterator : _matrix)
		{
			iterator.clear();
		}
		_matrix.clear();
	}

	double getNorm(void) const
	{
		double norm = 0;
		for (auto it1 : _matrix)
		{
			for (auto it2 : it1)
			{
				norm += it2 * it2;
			}
		}
		return sqrt(norm);
	};

	inline bool operator>(const matrix& temp) const 
	{
		return this->_matrix.size() > temp.getNorm();
	}
	inline bool operator<(const matrix& temp) const 
	{
		return this->_matrix.size() < temp.getNorm();
	}
	inline bool operator>=(const matrix& temp) const
	{
		return this->_matrix.size() >= temp.getNorm();
	}
	inline bool operator<=(const matrix& temp) const
	{
		return this->_matrix.size() <= temp.getNorm();
	}
private:
	std::vector<std::vector<double>> _matrix;
	friend std::ostream& operator<<(std::ostream&, const matrix&);
	friend std::istream& operator>>(std::istream&, matrix&);
};

