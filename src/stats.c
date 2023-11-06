#include "libs/utils.h"

int main(void)
{
  int tam = pedir_entero("la longitud del arreglo");
  float a[tam];
  datos_t d;

  pedir_arreglo_float(tam, a);

  d = stats(tam, a);

  imprimir_stats(d);

  return 0;
}

/*
Ingrese un valor para la longitud del arreglo
3
Ingrese un valor para el arreglo en la posición 0
1
Ingrese un valor para el arreglo en la posición 1
2
Ingrese un valor para el arreglo en la posición 2
3
El Minimo del arreglo es 1.000000.
El Maximo del arreglo es 3.000000.
El Promedio de los elementos del arreglo es 2.000000.

Ingrese un valor para la longitud del arreglo
4
Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
5
Ingrese un valor para el arreglo en la posición 2
1
Ingrese un valor para el arreglo en la posición 3
6
El Minimo del arreglo es 1.000000.
El Maximo del arreglo es 6.000000.
El Promedio de los elementos del arreglo es 3.500000.
*/