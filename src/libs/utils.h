#include <stdbool.h>

#include "models.h"

int pedir_entero(char *name);

void imprimir_entero(int x, char *name);

void imprimir_division(div_t div);

char pedir_caracter(char *name);

void hola_hasta(int n);

int minimo(int x, int y);

int absoluto(int x);

int suma_hasta(int n);

bool es_vocal(char letra);

div_t division(int x, int y);

void pedir_arreglo(int n_max, int a[]);

void imprimir_arreglo(int n_max, int a[]);

void pedir_arreglo_float(int n_max, float a[]);

void imprimir_arreglo_float(int n_max, float a[]);

void pedir_arreglo_asoc(int n_max, asoc a[]);

int sumatoria(int tam, int a[]);

bool todos_pares(int tam, int a[]);

bool existe_multiplo(int m, int tam, int a[]);

void intercambiar(int tam, int a[], int i, int j);

int minimo_pares(int tam, int a[]);

int minimo_impares(int tam, int a[]);

int prim_iguales(int tam, int a[]);

comp_t cuantos(int tam, int a[], int elem);

void imprimir_cuantos(comp_t c, int elem);

datos_t stats(int tam, float a[]);

void imprimir_stats(datos_t d);

bool asoc_existe(int tam, asoc a[], clave_t c);

int nesimo_primo(int N);

bool es_primo(int n);