#pragma once
#include <vector>
#include <iostream>
using namespace std;

template <class T, unsigned int size>
class matrix
{
public:
	matrix(void)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				_matrix[i][j] = copy[i][j] = 0;
			}
		}
	}
	~matrix(void){ }

	void save(void)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				copy[i][j] = _matrix[i][j];
			}
		}
	}

	void restore(void)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				_matrix[i][j] = copy[i][j];
			}
		}
	}

	void operator^(const int p)
	{
		matrix<T, size> temp = *this;
		for (int i = 2; i <= p; i++)
		{
			temp = temp * (*this);
		}
		*this = temp;
	}

	matrix<T,size> operator=(const matrix<T, size> m)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				this->_matrix[i][j] = m._matrix[i][j];
			}
		}
		return *this; 
	}

private:
	T _matrix[size][size];
	T copy[size][size];
	unsigned int _size = size;

	template <typename T, unsigned int size>
	friend matrix<T,size> operator+(const matrix<T,size>& m1, const matrix<T,size>& m2);

	template <typename T, unsigned int size>
	friend matrix<T, size> operator-(const matrix<T, size>& m1, const matrix<T, size>& m2);

	template <typename T, unsigned int size>
	friend matrix<T, size> operator*(const matrix<T, size>& m1, const matrix<T, size>& m2);

	template <typename T, unsigned int size>
	friend std::ostream& operator<<(std::ostream&, const matrix<T,size>&);

	template <typename T, unsigned int size>
	friend std::istream& operator>>(std::istream&, matrix<T,size>&);
};

template <typename T, unsigned int size>
matrix<T, size> operator+(const matrix<T, size>& m1, const matrix<T, size>& m2)
{
	matrix<T, size> m3;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			m3._matrix[i][j] = m1._matrix[i][j] + m2._matrix[i][j];
		}
	}
	return m3;
}

template <typename T, unsigned int size>
matrix<T, size> operator-(const matrix<T, size>& m1, const matrix<T, size>& m2)
{
	matrix<T, size> m3;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			m3._matrix[i][j] = m1._matrix[i][j] - m2._matrix[i][j];
		}
	}
	return m3;
}

template <typename T, unsigned int size>
matrix<T, size> operator*(const matrix<T, size>& m1, const matrix<T, size>& m2)
{
	matrix<T, size> m3;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			m3._matrix[i][j] = 0;
			for (int index = 0; index < size; index++)
			{
				m3._matrix[i][j] += m1._matrix[i][index] * m2._matrix[index][j];
			}
		}
	}
	return m3;
}

template <typename T, unsigned int size>
std::ostream& operator<<(std::ostream& out, const matrix<T, size>& temp)
{
	for (int i = 0; i < temp._size; i++)
	{
		for (int j = 0; j < temp._size; j++)
		{
			out << temp._matrix[i][j] << "   ";
		}
		out << std::endl;
	}
	return out;
}

template <typename T, unsigned int size>
std::istream& operator>>(std::istream& in, matrix<T, size>& temp)
{
	for (int i = 0; i < temp._size; i++)
	{
		for (int j = 0; j < temp._size; j++)
		{
			in >> temp._matrix[i][j];
		}
	}
	return in;
}