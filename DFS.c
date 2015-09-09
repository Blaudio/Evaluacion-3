#include <stdio.h>
#include "Grafos.c"

Nodo Busqueda_profundidad(Nodo *Grafo,  int elemento){
  Nodo *aux = *Grafo;
  for(contador=0; contador<=Nodos; contador++){
    if(aux->color==("W") &&  grafo->vecinos[elemento][contador]==1){
      Busqueda_profundidad_visita(aux, contador);
    }
  }  
}

Nodo Busqueda_profundidad_visita(Nodo *Grafo,  int elemento){
  
}
