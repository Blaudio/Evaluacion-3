#include <stdio.h>
#define Nodos 7
#define Aristas 12

typedef struct Vecino{
  char nombre;
  char color;//solo se usa en busqueda;
  int distancia;//solo se usa en busqueda;
  Vecino *vecinos;
}Vecino

typedef struct Nodo{
  char nombre;
  char color;//solo se usa en busqueda;
  int distancia;//solo se usa en busqueda;
  int c_vecinos;//indica la cantidad de vecinos que tiene el nodo;
  struct Nodo *Padre;//solo se usa en busqueda;
  struct Nodos *vecinos[Nodos];
}Nodo;

Nodo *inicializa(Nodo grafo){
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  aux->Nombre=NULL;
  aux->color=W;
  aux->distancia=0;
  aux->padre=NULL;
  aux->c_vecinos=0;
  aux->vecinos[0]=NULL;
  return (aux);
}

//if(grafo->nombre=="A"){} //base para no tener que crear mas de un vecino

Nodo *agrega_elementos_A(Nodo grafo){
  grafo->nombre=("A");
  grafo->c_vecinos=2;
  grafo->vecinos[0]=*agrega_elementos_B(grafo);
  grafo->vecinos[1]=//*agrega_elementos_C(grafo);
  grafo->vecinos[2]=//*agrega_elementos_F(grafo);
  return(grafo);
}
Nodo *agrega_elementos_B(Nodo grafo){
  Nodo*aux;
  aux->nombre=("B");
  aux->c_vecinos=2;
  if(grafo->nombre=="A"){
    aux->vecinos[0]=grafo;  
  }
  aux->vecinos[1]=*agrega_elementos_C(grafo);
  aux->vecinos[2]=//*agrega_elementos_H(grafo);
  return(aux);
}
Nodo *agrega_elementos_C(Nodo grafo){
  Nodo*aux;
  aux->nombre=("C");
  aux->c_vecinos=3;
  if(aux->nombre=="A"){
    aux->vecinos[0]=grafo;
  }
  if(aux->nombre=="B"){
    aux->vecinos[1]=grafo;
  }
  aux->vecinos[2]=*agrega_elementos_D(grafo);
  aux->vecinos[3]=//*agrega_elementos_E(grafo);
  return(grafo);
}
Nodo *agrega_elementos_D(Nodo grafo){
  grafo->nombre=("D");
  grafo->c_vecinos=2;
  grafo->vecinos[0]=//*agrega_elementos_c(grafo);
  grafo->vecinos[1]=*agrega_elementos_F(grafo);
  grafo->vecinos[2]=//*agrega_elementos_G(grafo);
  return(grafo);
}

Nodo *agrega_elementos_F(Nodo grafo){
  grafo->nombre=("F");
  grafo->c_vecinos=2;
  if(grafo->nombre=="A"){
    grafo->vecinos[0]=grafo;
  }
  grafo->vecinos[1]=//*agrega_elementos_D(grafo);
  grafo->vecinos[2]=*agrega_elementos_G(grafo);
  return(grafo);
}
Nodo *agrega_elementos_G(Nodo grafo){
  grafo->nombre=("G");
  grafo->c_vecinos=3;
  grafo->vecinos[0]=//*agrega_elementos_F(grafo);
  grafo->vecinos[1]=//*agrega_elementos_D(grafo);
  grafo->vecinos[2]=*agrega_elementos_E(grafo);
  grafo->vecinos[3]=//*agrega_elementos_H(grafo);
  return(grafo);
}
Nodo *agrega_elementos_E(Nodo grafo){
  grafo->nombre=("E");
  grafo->c_vecinos=2;
  grafo->vecinos[0]=//*agrega_elementos_C(grafo);
  grafo->vecinos[1]=//*agrega_elementos_G(grafo);
  grafo->vecinos[2]=*agrega_elementos_H(grafo);
  return(grafo);
}
Nodo *agrega_elementos_H(Nodo grafo){
  grafo->nombre=("H");
  grafo->c_vecinos=2;
  grafo->vecinos[0]=//*agrega_elementos_C(grafo);
  grafo->vecinos[1]=//*agrega_elementos_G(grafo);
  grafo->vecinos[2]=//*agrega_elementos_H(grafo);
  return(grafo);
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
