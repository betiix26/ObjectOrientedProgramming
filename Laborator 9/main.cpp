#include "complex.h"
#include "matrix.h"
using namespace std;

int main(int arg, char* argv[])
{
	matrix<int, 2> a;

	cin >> a;
	
	cout << "Matricea initila: \n";
    cout << a << '\n';
	a.save();
	cout << "A + A: \n";
	a = a + a;
	cout << a << '\n';

	cout << "A * A: \n";
	a = a * a;
	cout << a << '\n';

	a.restore();
	cout << "Matricea restaurata: \n";
	cout << a << '\n';

	cout << "A ^ 3: \n";
	a^3;
	cout << a << '\n';

	matrix<complex, 2> m1, m2;
	cin >> m1;
	cin >> m2;
	cout << '\n';
	cout << "Matricea 1:\n";
	cout << m1 << '\n';
	cout << "Matricea 2:\n";
	cout << m2 << '\n';
	cout << "m1 - m2:\n";
	cout << m1 - m2 << '\n';
	return 0;
}