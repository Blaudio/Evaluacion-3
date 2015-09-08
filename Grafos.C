#include <stdio.h>
//#define Nodos 8
//#define Aristas 13

typedef struct Nodo{
  char nombre;
  char color;
  int distancia;
  struct DFS *Padre;
}Nodo;
