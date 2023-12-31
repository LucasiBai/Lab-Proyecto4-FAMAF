#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>

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

void pedir_arreglo_float(int n_max, float a[])
{
  assert(n_max > 0);

  int i = 0;

  while (i < n_max)
  {
    printf("Ingrese un valor para el arreglo en la posición %d\n", i);
    scanf("%f", &a[i]);

    i++;
  }
}

void imprimir_arreglo_float(int n_max, float a[])
{
  assert(n_max > 0);

  int i = 0;

  while (i < n_max)
  {
    printf("El valor para el arreglo en la posición %d es %f\n", i, a[i]);
    i++;
  }
}

void pedir_arreglo_asoc(int n_max, asoc a[])
{
  assert(n_max > 0);

  int i = 0;
  while (i < n_max)
  {
    printf("Ingrese la clave de la posicion %d del arreglo\n", i);
    scanf(" %c", &a[i].clave);
    printf("Ingrese el valor de la posicion %d del arreglo\n", i);
    scanf("%d", &a[i].valor);
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

int minimo_pares(int tam, int a[])
{
  assert(tam > 0);

  int min, i;

  i = 0;
  min = INT_MAX;

  while (i < tam)
  {
    if (
        a[i] % 2 == 0)
    {
      min = minimo(min, a[i]);
    }
    i++;
  }

  return min;
}

int minimo_impares(int tam, int a[])
{
  assert(tam > 0);

  int min, i;

  i = 0;
  min = INT_MAX;

  while (i < tam)
  {
    if (
        a[i] % 2 != 0)
    {
      min = minimo(min, a[i]);
    }
    i++;
  }

  return min;
}

int prim_iguales(int tam, int a[])
{
  assert(tam > 0);

  int i, f, l;

  i = 0;
  f = a[i];

  l = 0;

  while (i < tam && a[i] == f)
  {
    l++;
    i++;
  }

  return l;
}

comp_t cuantos(int tam, int a[], int elem)
{
  assert(tam > 0);

  int i = 0;
  comp_t c;

  c.iguales = 0;
  c.mayores = 0;
  c.menores = 0;

  while (i < tam)
  {
    if (a[i] < elem)
    {
      c.menores++;
    }
    else if (a[i] > elem)
    {
      c.mayores++;
    }
    else
    {
      c.iguales++;
    }

    i++;
  }

  return c;
}

void imprimir_cuantos(comp_t c, int elem)
{
  printf("Hay %d elementos menores a %d.\nHay %d elementos iguales a %d.\nHay %d elementos mayores a %d.\n", c.menores, elem, c.iguales, elem, c.mayores, elem);
}

datos_t stats(int tam, float a[])
{
  assert(tam > 0);

  datos_t d;
  int i = 0;
  float sum = 0;

  d.maximo = INT_MIN;
  d.minimo = INT_MAX;

  while (i < tam)
  {
    if (d.maximo < a[i])
    {
      d.maximo = a[i];
    }
    if (d.minimo > a[i])
    {
      d.minimo = a[i];
    }

    sum = sum + a[i];
    i++;
  }

  d.promedio = sum / tam;

  return d;
}

void imprimir_stats(datos_t d)
{
  printf("El Minimo del arreglo es %f.\nEl Maximo del arreglo es %f.\nEl Promedio de los elementos del arreglo es %f.\n", d.minimo, d.maximo, d.promedio);
}

bool asoc_existe(int tam, asoc a[], clave_t c)
{
  assert(tam > 0);

  int i = 0;

  while (i < tam)
  {
    if (a[i].clave == c)
    {
      return true;
    }
    i++;
  }

  return false;
}

bool es_primo(int n)
{
  int i = 2;

  if (n <= 1)
  {
    return false;
  }

  while (i * i <= n)
  {
    if (n % i == 0)
    {
      return false;
    }
    i++;
  }

  return true;
}

int nesimo_primo(int N)
{
  int i = 0;
  int j = i;
  int p;

  while (j != N)
  {
    if (es_primo(i))
    {
      j++;
      p = i;
    }
    i++;
  }

  return p;
}
