#include <iostream>
#include <algorithm>
using namespace std;
namespace sma
{
	template <class T, unsigned int size> 
	class Array
	{
	private:
		T array[size];
		unsigned int _size = size;
	public:
		void read(void);
		void sort(void);
		void display(void) const;
	};
	
	template <class T, unsigned int size>
	void Array<T, size>::read(void)
	{
		for (unsigned int index = 0; index < _size; index++)
		{
			cin >> array[index];
		}
	}

	template <class T, unsigned int size>
	void Array<T, size>::display(void) const
	{
		for (auto iterator: array)
		{
			cout << iterator << '\n';
		}
		cout << endl;
	}

	template <class T, unsigned int size>
	void Array<T, size>::sort(void)
	{
		std::sort(array, array + _size);
	}
}

