#include <assert.h>

#include "libs/utils.h"

int main(void)
{
  int x, y;

  int X = pedir_entero("x");
  int Y = pedir_entero("y");

  x = X;
  y = Y;

  assert(x == X && y == Y);

  x = x + 1;
  y = X + y;

  assert(x == X + 1 && y == X + Y);

  imprimir_entero(x, "x");
  imprimir_entero(y, "y");

  return 0;
}

/*
Ingrese un valor para x
3
Ingrese un valor para y
2
El valor de x es 4
El valor de y es 5

Ingrese un valor para x
75
Ingrese un valor para y
32
El valor de x es 76
El valor de y es 107
*/