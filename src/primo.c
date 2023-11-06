#include <assert.h>
#include <stdio.h>

#include "libs/utils.h"

int main(void)
{
  int N = pedir_entero("n");
  int p;

  assert(N > 0);

  p = nesimo_primo(N);

  printf("El %d-esimo primo es %d.\n", N, p);

  return 0;
}

/*
Ingrese un valor para n
4
El 4-esimo primo es 7.

Ingrese un valor para n
4
El 4-esimo primo es 7.
*/