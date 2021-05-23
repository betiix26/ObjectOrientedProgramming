#include "utils.h"
#include <string>
#include "matrix.h"

int main(void)
{
	sma::Array<matrix, 3> a;
	a.read();
	a.display();
	a.sort();
	a.display();

	sma::Array<int, 4> myArray;
	myArray.read();
	myArray.display();
	myArray.sort();
	myArray.display();

	sma::Array<double, 4> myArrayD;
	myArrayD.read();
	myArrayD.display();
	myArrayD.sort();
	myArrayD.display();
}