#include <stdio.h>

typedef struct DFS{
  int indentificador;
  int distancia;
  struct DFS *Padre;
}DFS;
