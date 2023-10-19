# include <stdio.h>
# include <assert.h>

# include "utils.h"

int pedir_entero (char* name)
{
  int x;

  printf ("Ingrese un valor para %s\n", name);
  scanf ("%d", &x);

  return x;
}

void hola_hasta (int n)
{
  assert (n > 0);

  int i = n;

  while (i > 0)
  { 
    printf ("Hola\n");
    i = i - 1;
  }
  
}