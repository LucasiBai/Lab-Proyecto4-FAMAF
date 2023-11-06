#include <stdio.h>
#include <assert.h>
#include <ctype.h>

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

void imprimir_division(div_t div)
{
  printf("El cociente resultante es de %d y su resto %d\n", div.cociente, div.resto);
}

char pedir_caracter(char *name)
{
  char a;

  printf("Ingrese un valor para %s\n", name);
  scanf("%c", &a);

  return a;
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

int suma_hasta(int n)
{
  assert(n >= 0);

  int i, sum;

  sum = 0;
  i = 0;

  while (i <= n)
  {
    sum = sum + i;

    i++;
  }

  return sum;
}

bool es_vocal(char letra)
{
  char l = tolower(letra);

  return l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u';
}

div_t division(int x, int y)
{
  assert(x >= 0 && y > 0);

  div_t div;

  div.cociente = x / y;
  div.resto = x % y;

  return div;
}

void pedir_arreglo(int n_max, int a[])
{
  assert(n_max > 0);

  int i = 0;

  while (i < n_max)
  {
    printf("Ingrese un valor para el arreglo en la posición %d\n", i);
    scanf("%d", &a[i]);

    i++;
  }
}

void imprimir_arreglo(int n_max, int a[])
{
  assert(n_max > 0);

  int i = 0;

  while (i < n_max)
  {
    printf("El valor para el arreglo en la posición %d es %d\n", i, a[i]);
    i++;
  }
}

int sumatoria(int tam, int a[])
{
  assert(tam >= 0);

  int sum, i;

  sum = 0;
  i = 0;

  while (i < tam)
  {
    sum = sum + a[i];

    i++;
  }

  return sum;
}

bool todos_pares(int tam, int a[])
{
  assert(tam > 0);

  int i = 0;

  while (i < tam)
  {
    if (a[i] % 2 != 0)
    {
      return false;
    }

    i++;
  }

  return true;
}

bool existe_multiplo(int m, int tam, int a[])
{
  int i = 0;

  while (i < tam)
  {
    if (a[i] % m == 0)
    {
      return true;
    }
    i++;
  }

  return false;
}

void intercambiar(int tam, int a[], int i, int j)
{
  assert(0 <= i && i < tam && 0 <= j && j < tam);

  int I, J;

  I = a[i];
  J = a[j];

  a[i] = J;
  a[j] = I;
}
