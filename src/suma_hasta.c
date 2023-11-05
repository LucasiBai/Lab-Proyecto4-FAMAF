#include "libs/utils.h"

int main(void)
{
  int n, sum;

  n = pedir_entero("n");

  sum = suma_hasta(n);

  imprimir_entero(sum, "la suma");

  return 0;
}

/*
Ingrese un valor para n
6
El valor de la suma es 21

Ingrese un valor para n
2
El valor de la suma es 3
*/