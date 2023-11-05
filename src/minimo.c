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

/*
Ingrese un valor para x
4
Ingrese un valor para y
8
El valor de minimo entre x e y es 4

Ingrese un valor para x
10
Ingrese un valor para y
33
El valor de minimo entre x e y es 10
*/