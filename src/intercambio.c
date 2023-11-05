#include <assert.h>

#include "libs/utils.h"

int main(void)
{
  int x, y, z;

  int X = pedir_entero("x");
  int Y = pedir_entero("y");

  x = X;
  y = Y;

  assert(x == X && y == Y);

  z = x;
  x = y;
  y = z;

  assert(x == Y && y == X);

  imprimir_entero(x, "x");
  imprimir_entero(y, "y");

  return 0;
}

/*
Ingrese un valor para x
5
Ingrese un valor para y
10
El valor de x es 10
El valor de y es 5

Ingrese un valor para x
6
Ingrese un valor para y
5
El valor de x es 5
El valor de y es 6
*/