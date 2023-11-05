#include "libs/utils.h"

int main(void)
{
  int abs, x;

  x = pedir_entero("x");

  abs = absoluto(x);

  imprimir_entero(abs, "absoluto de x");

  return 0;
}