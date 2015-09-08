#include <stdio.h>
//#define Nodos 8
//#define Aristas 13

typedef struct Grafo{
  char nombre;
  char color;
  int distancia;
  struct DFS *Padre;
}Grafo;
