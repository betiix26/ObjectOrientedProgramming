#include "matrix.h"
using namespace std;

std::ostream& operator<<(std::ostream& out, const matrix& temp)
{
    for (auto it1 : temp._matrix)
    {
        for (auto it2 : it1)
        {
            out << it2 << " ";
        }
        out << endl;
    }
    return out;
}

std::istream& operator>>(std::istream& in, matrix& temp)
{
    if (!temp._matrix.size())
    {
        int size; 
        cin >> size;
        temp = matrix(size);
    }
    for (int i = 0; i < temp._matrix.size(); i++)
    {
        for (int j = 0; j < temp._matrix.size(); j++)
        {
            in >> temp._matrix[i][j];
        }
    }
    return in;
}
