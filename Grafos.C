#include <stdio.h>
#define Nodos 7
#define Aristas 12

typedef struct Vecino{
  char nombre;
  char color;
  int distancia;
  Vecino *vecinos;
}Vecino

typedef struct Nodo{
  char nombre;
  char color;
  int distancia;
  struct Nodo *Padre;
  struct Vecino *vecinos;
}Nodo;

Nodo *inicializa(Nodo grafo){
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  aux->Nombre=NULL;
  aux->color=W;
  aux->distancia=0:
  aux->padre=NULL;
  aux->vecinos=NULL;
}

//#define TE 5
//#define Nulo NULL

//typedef char  *tetq;
//typedef float tvalor;

//typedef struct arco {
//	struct nodo *origen;
//	struct nodo *destino;
//	tvalor valor;
//	struct arco *sig;
//} *tarco;

//typedef struct nodo {
//	int nodo;
//	tetq etiq;
//	tarco ady;
//	tarco inc;
//	struct nodo *sig;
//} *tnodo;

//typedef tnodo tgrafo;
