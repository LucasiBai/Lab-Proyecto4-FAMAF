typedef struct
{
  int cociente;
  int resto;
} div_t;

typedef struct
{
  int menores;
  int iguales;
  int mayores;
} comp_t;

typedef struct
{
  float maximo;
  float minimo;
  float promedio;
} datos_t;

typedef char clave_t;
typedef int valor_t;

typedef struct
{
  clave_t clave;
  valor_t valor;
} asoc;
