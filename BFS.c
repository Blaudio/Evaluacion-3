#include <stdio.h>
#include <stdlib.h>
#include "Grafos.h"
#include "Cola.h"

int Busqueda_a_lo_ancho(Nodo *Grafo, int elemento){
  cola *Qcola;
  int elemento_actual;
  int contador=0;
  Qcola=iniciar_elemento_cola();
  Grafo->color[elemento]=("G");
  Qcola=agregar_elemento_cola(Qcola, elemento);
//  aux->padre[elemento]=0;
  while(!vacio_elemento_cola(Qcola)){
    elemento_actual=Qcola->datos[Qcola->frente];
    eliminar_elemento_cola(Qcola);
    printf ("|%d",Grafo->nombre[elemento_actual]);//Aqui se imprime el estado de busqueda.
    for(contador=0; contador<=Nodos; contador++){
      if(Grafo->color[elemento_actual]==("W") &&  Grafo->vecinos[elemento_actual][contador]==1){
        printf ("->%d",Grafo->nombre[contador]);//Aqui se imprime el estado de busqueda para el nodo seleccionado.
        Grafo->color[contador]=("G");
        Grafo->distancia[contador]=Grafo->distancia[elemento_actual]+1;
        Grafo->padre[contador]=elemento_actual;
        Qcola=agregar_elemento_cola(Qcola, contador);
      }
    }
    printf ("|\n");//Aquie se finaliza la impresion de la busqueda del nodo actual
    Grafo->color[elemento_actual]=("B");
  }
}
