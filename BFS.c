#include <stdio.h>
#include "Grafos.c"

Nodo Busqueda_a_lo_ancho(Nodo *Grafo, int elemento){
  Nodo *aux = *Grafo;
  cola *Qcola;
  int elemento_actual;
  int contador=0;
  Qcola=iniciar_elemento_cola;
  aux->color[elemento]=("G");
  Qcola=agregar_elemento_cola(Qcola, elemento);
//  aux->padre[elemento]=0;
  while(!vacio_elemento_cola(Qcola)){
    elemento_actual=Qcola->datos[Qcola->frente];
    eliminar_elemento_cola(Qcola);
    for(contador=0; contador<=Nodos; contador++){
      if(aux->color==("W") &&  grafo->vecinos[elemento_actual][contador]==1){
        aux->color[contador]=("G");
        aux->distancia[contador]=aux->distancia[elemento_actual]+1;
        aux->padre[contador]=elemento_actual;
        Qcola=agregar_elemento_cola(Qcola, contador);
      }
    }
    aux->color[elemento_actual]=("B");
  }
}
