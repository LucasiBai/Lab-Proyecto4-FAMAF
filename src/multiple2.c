#include <assert.h>

#include "libs/utils.h"

int main(void)
{
  int x, y, z;

  int X = pedir_entero("x");
  int Y = pedir_entero("y");
  int Z = pedir_entero("z");

  x = X;
  y = Y;
  z = Z;

  assert(x == X && y == Y && z == Z);

  x = y;
  y = y + X + z;
  z = Y + X;

  assert(x == Y && y == Y + X + Z && z == Y + X);

  imprimir_entero(x, "x");
  imprimir_entero(y, "y");
  imprimir_entero(z, "z");

  return 0;
}

/*
Ingrese un valor para x
23
Ingrese un valor para y
5
Ingrese un valor para z
26
El valor de x es 5
El valor de y es 54
El valor de z es 28

Ingrese un valor para x
5
Ingrese un valor para y
2
Ingrese un valor para z
74
El valor de x es 2
El valor de y es 81
El valor de z es 7
*/