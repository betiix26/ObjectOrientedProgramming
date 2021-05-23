#pragma warning (disable: 4996)

//#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include "complex.h"

int main()

{

    struct nr_complex num1, num2, num, numitor;  /*declararea variabilelor*/


    /*citirea datelor de intrare*/


    printf("Coeficient partea reala nr1: ");
    scanf("%f", &num1.a);

    printf("Coeficient partea imaginara nr1: ");
    scanf("%f", &num1.b);

    printf("Coeficient partea reala nr2: ");
    scanf("%f", &num2.a);

    printf("Coeficient partea imaginara nr2: ");
    scanf("%f", &num2.b);




    

    numitor = conjugareNumereComplexe(num2);

    





    num = inmultireNumereComplexe(num1, conjugareNumereComplexe(num2));

    numitor = inmultireNumereComplexe(num2, conjugareNumereComplexe(num2));

    printf("IMPARITREA CELOR 2 NUMERE: Z = Z1 / Z2 = %.0f /%.0f + %.0f/ %.0f*i = %.2f + %.2f*i\n", num.a, numitor.a, num.b, numitor.a, num.a / numitor.a, num.b / numitor.a);




    return 0;
}

