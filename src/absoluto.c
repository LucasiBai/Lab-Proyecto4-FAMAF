#include "libs/utils.h"

int main(void)
{
  int abs, x;

  x = pedir_entero("x");

  abs = absoluto(x);

  imprimir_entero(abs, "absoluto de x");

  return 0;
}

/*
Ingrese un valor para x
5
El valor de absoluto de x es 5

Ingrese un valor para x
-10
El valor de absoluto de x es 10
*/