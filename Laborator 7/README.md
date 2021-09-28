Sa se proiecteze si sa se implementeze o clasa asociata numerelor complexe. Clasa va
contine supraancarcarea operatorului de atribuire, a principalilor operatori aritmetici,
precum si a operatorului ~ pentru operatia de calcul a modulului unui numar complex. De
asemenea, se va supraancarca operatorul ^ pentru operatia de ridicre a unui numar
complex la o putere intreaga. In plus, clasa trebuie sa posede o functie de afisare, precum
si constructori care sa permita urmatoarea secventa:

complex z1; // z1 = 0+0i

complex z2(5); // z2 = 5+0i

complex z3(2, 3); // z3 = 2+3i

complex z4 = z2;

Functia de test va utiliza un tablou de numere complexe v = (z1, z2, ..., z2*n) pentru
calculul expresiei:

z = (z13 + z33+ ... z2*n-13) / (z24+ z44+ ... z2*n4)
