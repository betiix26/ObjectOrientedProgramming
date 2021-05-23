#pragma once
#include <stdexcept>
#include <vector>

template <class Elem>
class Iterator
{
public:
	Iterator(const vector<Elem>& _list) : list(&_list), current(0) { }
	void first(void)
	{
		current = 0;
	}
	void next(void)
	{
		current++;
	}
	bool done(void) const
	{
		return (current == list->size());
	}
	Elem currentItem(void) const
	{
		try
		{
			if (done())
			{
				throw out_of_range("error");
			}
			return list->at(current);
		}
		catch (out_of_range e)
		{
			cout << "out of range";
		}

	}
private:
	const vector<Elem>* list;
	int current;
};