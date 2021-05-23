#include "ships.h"
using namespace std;
const int Ship1::_size = 3;
const int Ship2::_size = 2;
const int Ship3::_size = 4;
const int Ship4::_size = 1;
const int Ship5::_size = 5;
const int Ship6::_size = 3;

void Ship::destroyShip(Board& aux)
{
	if (start.first == end.first)
	{
		int column = start.second - 1;
		while (++column <= end.second)
		{
			int* point = &aux.getPoint(make_pair(start.first, column));
			*point = 0;
		}
	}
	else
	{
		int row = start.first - 1;
		while (++row <= end.first)
		{
			int* point = &aux.getPoint(make_pair(row, start.second));
			*point = 0;
		}
	}
}

bool Ship::setShip(Board& aux)
{
	bool ok = true;
	if (start.first == end.first)
	{
		int column = start.second - 1;
		while (++column <= end.second)
		{
			if (!aux.valid(make_pair(start.first, column)))
			{
				ok = false;
			}
		}
		if (ok)
		{
			column = start.second - 1;
			while (++column <= end.second)
			{
				int* point = &aux.getPoint(make_pair(start.first, column));
				*point = 1;
			}
		}
	}
	else
	{
		int row = start.first - 1;
		while (++row <= end.first)
		{
			if (!aux.valid(make_pair(row, end.second)))
			{
				ok = false;
			}
		}
		if (ok)
		{
			row = start.first - 1;
			while (++row <= end.first)
			{
				int* point = &aux.getPoint(make_pair(start.second, row));
				*point = 1;
			}
		}
	}
	return ok;
}

bool Ship::sunken(Board& aux) const
{
	int counter = 0;
	if (start.first == end.first)
	{
		int column = start.second - 1;
		while (++column <= end.second)
		{
			int* point = &aux.getPoint(make_pair(start.first, column));
			counter += (*point == 3);
		}
		return counter == (end.second - start.second + 1);
	}
	else
	{
		int row = start.first - 1;
		while (++row <= end.first)
		{
			int* point = &aux.getPoint(make_pair(start.second, row));
			counter += (*point == 3);
		}
		return counter == (end.first - start.first + 1);
	}
}

void Ship::save(ofstream& g) const
{
	g << start.first << " " << start.second << '\n';
	g << end.first << " " << end.second << '\n';
}

void Ship::load(istream& f)
{
	f >> start.first >> start.second;
	f >> end.first >> end.second;
}

bool Ship1::placeShip(pair<int, int>& _start, pair<int, int>& _end, Board& aux)
{
	if (_start.first == _end.first && _start.second > _end.second)
	{
		swap(_start, _end);
	}
	else if (_start.second == _end.second && _start.first > _end.first)
	{
		swap(_start, _end);
	}
	if (_start.first < 0 || _start.second < 0 || _end.first < 0 || _end.second < 0)
	{
		return false;
	}
	unsigned int size = aux.getSize() - 1;
	if (_start.first > size || _start.second > size || _end.first > size || _end.second > size)
	{
		return false;
	}
	if (!check(_start, _end))
	{
		return false;
	}
	start = _start;
	end = _end;
	return setShip(aux);
}

bool Ship1::check(const pair<int, int>& _start, const pair<int, int>& _end) const
{
	if (_start.first == _end.first)
	{
		return (_end.second - _start.second) == (_size - 1);
	}
	else
	{
		return (_end.first - _start.first) == (_size - 1);
	}
}

bool Ship2::placeShip(pair<int, int>& _start, pair<int, int>& _end, Board& aux)
{
	if (_start.first == _end.first && _start.second > _end.second)
	{
		swap(_start, _end);
	}
	else if (_start.second == _end.second && _start.first > _end.first)
	{
		swap(_start, _end);
	}
	if (_start.first < 0 || _start.second < 0 || _end.first < 0 || _end.second < 0)
	{
		return false;
	}
	unsigned int size = aux.getSize() - 1;
	if (_start.first > size || _start.second > size || _end.first > size || _end.second > size)
	{
		return false;
	}
	if (!check(_start, _end))
	{
		return false;
	}
	start = _start;
	end = _end;
	return setShip(aux);
}

bool Ship2::check(const pair<int, int>& _start, const pair<int, int>& _end) const
{
	if (_start.first == _end.first)
	{
		return (_end.second - _start.second) == (_size - 1);
	}
	else
	{
		return (_end.first - _start.first) == (_size - 1);
	}
}

bool Ship3::placeShip(pair<int, int>& _start, pair<int, int>& _end, Board& aux)
{
	if (_start.first == _end.first && _start.second > _end.second)
	{
		swap(_start, _end);
	}
	else if (_start.second == _end.second && _start.first > _end.first)
	{
		swap(_start, _end);
	}
	if (_start.first < 0 || _start.second < 0 || _end.first < 0 || _end.second < 0)
	{
		return false;
	}
	unsigned int size = aux.getSize() - 1;
	if (_start.first > size || _start.second > size || _end.first > size || _end.second > size)
	{
		return false;
	}
	if (!check(_start, _end))
	{
		return false;
	}
	start = _start;
	end = _end;
	return setShip(aux);
}

bool Ship3::check(const pair<int, int>& _start, const pair<int, int>& _end) const
{
	if (_start.first == _end.first)
	{
		return (_end.second - _start.second) == (_size - 1);
	}
	else
	{
		return (_end.first - _start.first) == (_size - 1);
	}
}

bool Ship4::placeShip(pair<int, int>& _start, pair<int, int>& _end, Board& aux)
{
	if (_start.first == _end.first && _start.second > _end.second)
	{
		swap(_start, _end);
	}
	else if (_start.second == _end.second && _start.first > _end.first)
	{
		swap(_start, _end);
	}
	if (_start.first < 0 || _start.second < 0 || _end.first < 0 || _end.second < 0)
	{
		return false;
	}
	unsigned int size = aux.getSize() - 1;
	if (_start.first > size || _start.second > size || _end.first > size || _end.second > size)
	{
		return false;
	}
	if (!check(_start, _end))
	{
		return false;
	}
	cout << "da";
	start = _start;
	end = _end;
	return setShip(aux);
}

bool Ship4::check(const pair<int, int>& _start, const pair<int, int>& _end) const
{
	if (_start.first == _end.first)
	{
		return (_end.second - _start.second) == (_size - 1);
	}
	else
	{
		return (_end.first - _start.first) == (_size - 1);
	}
}

bool Ship5::placeShip(pair<int, int>& _start, pair<int, int>& _end, Board& aux)
{
	if (_start.first == _end.first && _start.second > _end.second)
	{
		swap(_start, _end);
	}
	else if (_start.second == _end.second && _start.first > _end.first)
	{
		swap(_start, _end);
	}
	if (_start.first < 0 || _start.second < 0 || _end.first < 0 || _end.second < 0)
	{
		return false;
	}
	unsigned int size = aux.getSize() - 1;
	if (_start.first > size || _start.second > size || _end.first > size || _end.second > size)
	{
		return false;
	}
	if (!check(_start, _end))
	{
		return false;
	}
	start = _start;
	end = _end;
	return setShip(aux);
}

bool Ship5::check(const pair<int, int>& _start, const pair<int, int>& _end) const
{
	if (_start.first == _end.first)
	{
		return (_end.second - _start.second) == (_size - 1);
	}
	else
	{
		return (_end.first - _start.first) == (_size - 1);
	}
}

bool Ship6::placeShip(pair<int, int>& _start, pair<int, int>& _end, Board& aux)
{
	if (_start.first == _end.first && _start.second > _end.second)
	{
		swap(_start, _end);
	}
	else if (_start.second == _end.second && _start.first > _end.first)
	{
		swap(_start, _end);
	}
	if (_start.first < 0 || _start.second < 0 || _end.first < 0 || _end.second < 0)
	{
		return false;
	}
	unsigned int size = aux.getSize() - 1;
	if (_start.first > size || _start.second > size || _end.first > size || _end.second > size)
	{
		return false;
	}
	if (!check(_start, _end))
	{
		return false;
	}
	start = _start;
	end = _end;
	return setShip(aux);
}

bool Ship6::check(const pair<int, int>& _start, const pair<int, int>& _end) const
{
	if (_start.first == _end.first)
	{
		return (_end.second - _start.second) == (_size - 1);
	}
	else
	{
		return (_end.first - _start.first) == (_size - 1);
	}
}