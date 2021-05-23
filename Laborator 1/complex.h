#pragma once

#ifndef complex_h
#define complex_h

#include <stdio.h>

/*definirea tipului de date complex*/
typedef struct nr_complex
{
    float a;  /*a-partea reala a nr complex*/
    float b;  /*b-partea imaginara a nr complex*/
};


struct nr_complex adunareNumereComplexe(struct nr_complex num1, struct nr_complex num2);
struct nr_complex scadereNumereComplexe(struct nr_complex num1, struct nr_complex num2);
struct nr_complex conjugareNumereComplexe(struct nr_complex num);
struct nr_complex inmultireNumereComplexe(struct nr_complex num1, struct nr_complex num2);

#endif 
#pragma once



