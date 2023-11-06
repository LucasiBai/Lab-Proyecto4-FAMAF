#include <stdio.h>

#include "libs/utils.h"

#define TAM 3

asoc pedir_clave_asoc(void)
{
  asoc c;

  printf("Ingrese la clave para buscar\n");
  scanf(" %c", &c.clave);

  return c;
}

int main(void)
{
  asoc a[TAM];
  pedir_arreglo_asoc(TAM, a);

  asoc c = pedir_clave_asoc();

  if (asoc_existe(TAM, a, c.clave))
  {
    printf("La clave '%c' existe en el arreglo.\n", c.clave);
  }
  else
  {
    printf("La clave '%c' no existe en el arreglo.\n", c.clave);
  }

  return 0;
}

/*
Ingrese la clave de la posicion 0 del arreglo
a
Ingrese el valor de la posicion 0 del arreglo
3
Ingrese la clave de la posicion 1 del arreglo
b
Ingrese el valor de la posicion 1 del arreglo
6
Ingrese la clave de la posicion 2 del arreglo
c
Ingrese el valor de la posicion 2 del arreglo
2
Ingrese la clave para buscar
a
La clave 'a' existe en el arreglo.

Ingrese la clave de la posicion 0 del arreglo
g
Ingrese el valor de la posicion 0 del arreglo
2
Ingrese la clave de la posicion 1 del arreglo
h
Ingrese el valor de la posicion 1 del arreglo
3
Ingrese la clave de la posicion 2 del arreglo
i
Ingrese el valor de la posicion 2 del arreglo
4
Ingrese la clave para buscar
a
La clave 'a' no existe en el arreglo.
*/