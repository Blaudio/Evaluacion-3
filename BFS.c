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
    printf ("|%d",aux->nombre[elemento_actual]);//Aqui se imprime el estado de busqueda.
    for(contador=0; contador<=Nodos; contador++){
      if(aux->color==("W") &&  grafo->vecinos[elemento_actual][contador]==1){
        printf ("->%d",aux->nombre[contador]);//Aqui se imprime el estado de busqueda para el nodo seleccionado.
        aux->color[contador]=("G");
        aux->distancia[contador]=aux->distancia[elemento_actual]+1;
        aux->padre[contador]=elemento_actual;
        Qcola=agregar_elemento_cola(Qcola, contador);
      }
    }
    printf ("|\n");//Aquie se finaliza la impresion de la busqueda del nodo actual
    aux->color[elemento_actual]=("B");
  }
}
