#include <assert.h>

#include "libs/utils.h"

int main(void)
{
  int x, y, z;

  int x0 = pedir_entero("x");
  int y0 = pedir_entero("y");

  x = x0;
  y = y0;

  assert(x == x0 && y == y0);

  z = x;
  x = y;
  y = z;

  assert(x == y0 && y == x0);

  imprimir_entero(x, "x");
  imprimir_entero(y, "y");

  return 0;
}