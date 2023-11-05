#include "libs/utils.h"

int main(void)
{
  int x, y, m;

  x = pedir_entero("x");
  y = pedir_entero("y");

  m = minimo(x, y);

  imprimir_entero(m, "minimo entre x e y");

  return 0;
}