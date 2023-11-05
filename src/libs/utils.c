#include <stdio.h>
#include <assert.h>

#include "utils.h"

int pedir_entero(char *name)
{
  int x;

  printf("Ingrese un valor para %s\n", name);
  scanf("%d", &x);

  return x;
}

void imprimir_entero(int x, char *name)
{
  printf("El valor de %s es %d\n", name, x);
}

void hola_hasta(int n)
{
  assert(n > 0);

  int i = n;

  while (i > 0)
  {
    printf("Hola\n");
    i = i - 1;
  }
}

int minimo(int x, int y)
{
  int m;

  if (x >= y)
  {
    m = y;
  }
  else
  {
    m = x;
  }

  assert(m <= x && m <= y && (m == y || m == x));

  return m;
}

int absoluto(int x)
{
  int abs;

  if (x >= 0)
  {
    abs = x;
  }
  else
  {
    abs = -x;
  }

  assert(abs >= 0);

  return abs;
}