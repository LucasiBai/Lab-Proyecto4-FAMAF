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

/*
Ingrese un valor para x
5
Ingrese un valor para y
2
El cociente resultante es de 2 y su resto 1

Ingrese un valor para x
10
Ingrese un valor para y
2
El cociente resultante es de 5 y su resto 0
*/