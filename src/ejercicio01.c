#include "libs/utils.h"

int main(void)
{
  int n;

  n = pedir_entero("n");

  hola_hasta(n);

  return 0;
}

/*
Ingrese un valor para n
5
Hola
Hola
Hola
Hola
Hola

Ingrese un valor para n
2
Hola
Hola
*/