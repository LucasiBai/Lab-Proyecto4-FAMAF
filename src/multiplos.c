#include <assert.h>
#include <stdio.h>

#include "libs/utils.h"

#define TAM 3

void imprimir_son_todos_pares(bool a)
{
  if (a)
  {
    printf("Todos los elementos del arreglo son pares.\n");
  }
  else
  {
    printf("No todos los elementos del arreglo son pares.\n");
  }
}

void imprimir_existe_multiplo_en(int m, bool b)
{
  if (b)
  {
    printf("Existe un multiplo de %d en el arreglo.\n", m);
  }
  else
  {
    printf("No existe un multiplo de %d en el arreglo.\n", m);
  }
}

int main(void)
{
  int a[TAM], opt;
  bool b;

  pedir_arreglo(TAM, a);

  opt = pedir_entero("la funcionalidad deseada\n 0) Ejecuta solo_pares en el arreglo\n 1) Ejecuta existe_multiplo en el arreglo y necesita de un valor 'm'");

  assert(0 <= opt && opt <= 1);

  if (opt == 0)
  {
    b = todos_pares(TAM, a);
    imprimir_son_todos_pares(b);
  }
  else if (opt == 1)
  {
    int m = pedir_entero("m");
    b = existe_multiplo(m, TAM, a);

    imprimir_existe_multiplo_en(m, b);
  }
  return 0;
}

/*
Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
4
Ingrese un valor para el arreglo en la posición 2
6
Ingrese un valor para la funcionalidad deseada
 0) Ejecuta solo_pares en el arreglo
 1) Ejecuta existe_multiplo en el arreglo y necesita de un valor 'm'
1
Ingrese un valor para m
7
No existe un multiplo de 7 en el arreglo.

Ingrese un valor para el arreglo en la posición 0
2
Ingrese un valor para el arreglo en la posición 1
4
Ingrese un valor para el arreglo en la posición 2
6
Ingrese un valor para la funcionalidad deseada
 0) Ejecuta solo_pares en el arreglo
 1) Ejecuta existe_multiplo en el arreglo y necesita de un valor 'm'
0
Todos los elementos del arreglo son pares.
*/