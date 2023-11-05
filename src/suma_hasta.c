#include "libs/utils.h"

int main(void)
{
  int n, sum;

  n = pedir_entero("n");

  sum = suma_hasta(n);

  imprimir_entero(sum, "la suma");

  return 0;
}