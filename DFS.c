#include <stdio.h>
#include <stdlib.h>
#include "Grafos.h"

int Busqueda_profundidad_visita(Nodo *Grafo,  int elemento){
  int Tiempo, contador;
  contador=0;
  Tiempo=Grafo->tiempo+1;
  Grafo->tiempo=Tiempo;
  Grafo->color[elemento]=("G");
  for(contador=0; contador<=Nodos; contador++){
    if(Grafo->color[contador] == ("W")){
    	if(Grafo->vecinos[elemento][contador]==1){
    		printf ("->%s",Grafo->nombre[contador]);//Aqui se imprime el estado de busqueda para el nodo seleccionado.
    		Grafo->padre[contador]=elemento;
    		Grafo->color[contador]=("B");
    		Busqueda_profundidad_visita(Grafo, contador);
    	}
    }
  }  
  Grafo->color[elemento]=("B");
  Tiempo=Tiempo+1;
  Grafo->tiempo=Tiempo;
}

Nodo Busqueda_profundidad(Nodo *Grafo,  int elemento){
  Nodo *aux = Grafo;
  int contador;
  contador=0;
  printf ("|%s",aux->nombre[elemento]);//Aqui se imprime el estado de busqueda.
  for(contador=0; contador<=Nodos; contador++){
    if(aux->color[elemento]==("W") &&  aux->vecinos[elemento][contador]==1){
      Busqueda_profundidad_visita(aux, contador);
    }
  }  
  printf ("|\n");//Aquie se finaliza la impresion de la busqueda del nodo actual
}
