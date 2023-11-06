#include "libs/utils.h"

#define TAM 5

int main(void)
{
  int a[TAM], l;

  pedir_arreglo(TAM, a);

  l = prim_iguales(TAM, a);

  imprimir_entero(l, "la longitud de los primeros iguales del arreglo");

  return 0;
}

/*
Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
4
Ingrese un valor para el arreglo en la posición 2
5
Ingrese un valor para el arreglo en la posición 3
5
Ingrese un valor para el arreglo en la posición 4
6
El valor de la longitud de los primeros iguales del arreglo es 1

Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
2
Ingrese un valor para el arreglo en la posición 2
2
Ingrese un valor para el arreglo en la posición 3
4
Ingrese un valor para el arreglo en la posición 4
5
El valor de la longitud de los primeros iguales del arreglo es 3
*/