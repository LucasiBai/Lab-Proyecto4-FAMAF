#include "libs/utils.h"

int main(void)
{
  div_t div;
  int x, y;

  x = pedir_entero("x");
  y = pedir_entero("y");

  div = division(x, y);

  imprimir_division(div);

  return 0;
}