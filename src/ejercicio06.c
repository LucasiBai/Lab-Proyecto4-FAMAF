#include "libs/utils.h"

int main(void)
{
  int n_max = pedir_entero("longitud de arreglo");

  int a[n_max];

  pedir_arreglo(n_max, a);
  imprimir_arreglo(n_max, a);

  return 0;
}

/*
Ingrese un valor para longitud de arreglo
2
Ingrese un valor para el arreglo en la posición 0
4
Ingrese un valor para el arreglo en la posición 1
5
El valor para el arreglo en la posición 0 es 4
El valor para el arreglo en la posición 1 es 5

Ingrese un valor para longitud de arreglo
6
Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
3
Ingrese un valor para el arreglo en la posición 2
4
Ingrese un valor para el arreglo en la posición 3
5
Ingrese un valor para el arreglo en la posición 4
6
Ingrese un valor para el arreglo en la posición 5
1
El valor para el arreglo en la posición 0 es 2
El valor para el arreglo en la posición 1 es 3
El valor para el arreglo en la posición 2 es 4
El valor para el arreglo en la posición 3 es 5
El valor para el arreglo en la posición 4 es 6
El valor para el arreglo en la posición 5 es 1
*/