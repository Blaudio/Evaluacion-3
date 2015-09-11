#include <stdio.h>
#include "Grafos.c"

Nodo Busqueda_profundidad(Nodo *Grafo,  int elemento){
  Nodo *aux = *Grafo;
  int contador;
  contador=0;
  printf ("|%d",aux->nombre[elemento_actual]);//Aqui se imprime el estado de busqueda.
  for(contador=0; contador<=Nodos; contador++){
    if(aux->color==("W") &&  grafo->vecinos[elemento][contador]==1){
      Busqueda_profundidad_visita(aux, contador);
    }
  }  
  printf ("|\n");//Aquie se finaliza la impresion de la busqueda del nodo actual
}

Nodo Busqueda_profundidad_visita(Nodo *Grafo,  int elemento){
  int Tiempo, contador;
  contador=0;
  Tiempo=grafo->tiempo+1;
  Grafo->tiempo=Tiempo;
  Grafo->color[elemento]=("G");
  for(contador=0; contador<=Nodos; contador++){
    if(aux->color==("W") &&  grafo->vecinos[elemento][contador]==1){
      printf ("->%d",aux->nombre[contador]);//Aqui se imprime el estado de busqueda para el nodo seleccionado.
      Grafo->padre[contador]=elemento;
      Busqueda_profundidad_visita(aux, contador);
    }
  }  
  Grafo->color[elemento]=("B");
  Tiempo=Tiempo+1;
  Grafo->tiempo=Tiempo;
}
