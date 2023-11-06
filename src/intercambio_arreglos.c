#include "libs/utils.h"

int main(void)
{
  int tam, i, j;

  tam = pedir_entero("el tamaño del arreglo");
  int a[tam];

  pedir_arreglo(tam, a);

  i = pedir_entero("índice a ser intercambiado");

  j = pedir_entero("el otro índice a ser intercambiado");

  intercambiar(tam, a, i, j);

  imprimir_arreglo(tam, a);

  return 0;
}

/*
Ingrese un valor para el tamaño del arreglo
3
Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
4
Ingrese un valor para el arreglo en la posición 2
5
Ingrese un valor para índice a ser intercambiado
1
Ingrese un valor para el otro índice a ser intercambiado
2
El valor para el arreglo en la posición 0 es 2
El valor para el arreglo en la posición 1 es 5
El valor para el arreglo en la posición 2 es 4

Ingrese un valor para el tamaño del arreglo
4
Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
3
Ingrese un valor para el arreglo en la posición 2
4
Ingrese un valor para el arreglo en la posición 3
5
Ingrese un valor para índice a ser intercambiado
0
Ingrese un valor para el otro índice a ser intercambiado
3
El valor para el arreglo en la posición 0 es 5
El valor para el arreglo en la posición 1 es 3
El valor para el arreglo en la posición 2 es 4
El valor para el arreglo en la posición 3 es 2
*/