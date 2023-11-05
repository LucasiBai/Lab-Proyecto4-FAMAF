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