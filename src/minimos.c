#include "libs/utils.h"

#define TAM 3

int main(void)
{
  int a[TAM], mp, mi;

  pedir_arreglo(TAM, a);

  mp = minimo_pares(TAM, a);
  mi = minimo_impares(TAM, a);

  imprimir_entero(mp, "minimo de pares");
  imprimir_entero(mi, "minimo de impares");

  imprimir_entero(minimo(mp, mi), "minimo en todo el arreglo");

  return 0;
}

/*
Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
3
Ingrese un valor para el arreglo en la posición 2
4
El valor de minimo de pares es 2
El valor de minimo de impares es 3
El valor de minimo en todo el arreglo es 2

Ingrese un valor para el arreglo en la posición 0
5
Ingrese un valor para el arreglo en la posición 1
8
Ingrese un valor para el arreglo en la posición 2
20
El valor de minimo de pares es 8
El valor de minimo de impares es 5
El valor de minimo en todo el arreglo es 5
*/