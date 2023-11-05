#include <stdbool.h>
#include <stdio.h>

#include "libs/utils.h"

int main(void)
{
  char a;
  bool v;

  a = pedir_caracter("el caracter a");

  v = es_vocal(a);

  if (v)
  {
    printf("El valor %c es vocal.\n", a);
  }
  else
  {
    printf("El valor %c no es vocal.\n", a);
  }

  return 0;
}

/*
Ingrese un valor para el caracter a
a
El valor a es vocal.

Ingrese un valor para el caracter a
E
El valor E es vocal.
*/