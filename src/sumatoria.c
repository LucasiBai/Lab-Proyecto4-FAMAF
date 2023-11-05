#include "libs/utils.h"

#define TAM 5

int main(void)
{
  int a[TAM], sum;

  pedir_arreglo(TAM, a);

  sum = sumatoria(TAM, a);

  imprimir_entero(sum, "la sumatoria del arreglo");

  return 0;
}

/*
Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
2
Ingrese un valor para el arreglo en la posición 2
2
Ingrese un valor para el arreglo en la posición 3
2
Ingrese un valor para el arreglo en la posición 4
2
El valor de la sumatoria del arreglo es 10

Ingrese un valor para el arreglo en la posición 0
4
Ingrese un valor para el arreglo en la posición 1
5
Ingrese un valor para el arreglo en la posición 2
2
Ingrese un valor para el arreglo en la posición 3
6
Ingrese un valor para el arreglo en la posición 4
3
El valor de la sumatoria del arreglo es 20
*/