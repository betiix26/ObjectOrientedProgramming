#include "complex.h"


struct nr_complex conjugareNumereComplexe(struct nr_complex num)
{
    num.b = -num.b;
    return num;
}


struct nr_complex inmultireNumereComplexe(struct nr_complex num1, struct nr_complex num2)
{
    struct nr_complex num3;
    num3.a = (num1.a * num2.a - num1.b * num2.b);
    num3.b = (num1.a * num2.b + num1.b * num2.a);
    return num3;
}


struct nr_complex adunareNumereComplexe(struct nr_complex num1, struct nr_complex num2)
{
    struct nr_complex num3;
    num3.a = num1.a + num2.a;
    num3.b = num1.b + num2.b;
    return num3;
}


struct nr_complex scadereNumereComplexe(struct nr_complex num1, struct nr_complex num2)
{
    struct nr_complex num3;
    num3.a = num1.a - num2.a;
    num3.b = num1.b - num2.b;
    return num3;
}

