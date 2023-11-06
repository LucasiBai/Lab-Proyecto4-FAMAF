#include "libs/utils.h"

#define TAM 4

int main(void)
{
  comp_t c;
  int a[TAM], elem;

  elem = pedir_entero("elem");

  pedir_arreglo(TAM, a);

  c = cuantos(TAM, a, elem);

  imprimir_cuantos(c, elem);

  return 0;
}

/*
Ingrese un valor para elem
5
Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
3
Ingrese un valor para el arreglo en la posición 2
5
Ingrese un valor para el arreglo en la posición 3
7
Hay 2 elementos menores a 5.
Hay 1 elementos iguales a 5.
Hay 1 elementos mayores a 5.

Ingrese un valor para elem
6
Ingrese un valor para el arreglo en la posición 0
1
Ingrese un valor para el arreglo en la posición 1
6
Ingrese un valor para el arreglo en la posición 2
6
Ingrese un valor para el arreglo en la posición 3
8
Hay 1 elementos menores a 6.
Hay 2 elementos iguales a 6.
Hay 1 elementos mayores a 6.
*/