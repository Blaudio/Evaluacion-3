#include <stdio.h>
#define Nodos 7
//#define Aristas 12
//aqui estan las conversiones entre las cordenadas de las tablas y los elementos
// 0=A 1=B 2=C 3=D 4=E 5=F 6=G 7=H

typedef struct Nodo{
  char nombre[Nodos];//son los nombres de los nodos;
  char color[Nodos];//solo se usa en busqueda,es para poder identificar los nodos visitados durante la busqueda;
  int distancia[Nodos];//solo se usa en busqueda,indica cuantos nodos se han recorrido desde el inicio;
  int tiempo;//solo se usa en busqueda profunda, es donde se guarda los pasos realizados desde el inicio de la busqueda
  int vecinos[Nodos][Nodos];//indica si son vecinos o no son vecinos los nodos X e Y;
  int padre[Nodos];//solo se usa en busqueda, es donde se almacena quien es el predecesor en la busqueda
//  struct Nodo *Padre;//solo se usa en busqueda;
}Nodo;

Nodo *inicializa(Nodo grafo){
  int contadorA,contadorB
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  for(contadorA=0; contadorA<=Nodos; contadorA++){
     aux->nombre[contadorA]=NULL;
     aux->color[contadorA]=("W");//se le dara el color W(white/blanco)de manera predeterminada a todos;
     aux->distancia[contadorA]=0;//como no se ha iniciado una busqueda la distancia recorrida sera 0;
     aux->padre[contadorA]=0;//como solo se usa en la busqueda sera nullo;
    for(contadorB=0; contadorB<=Nodos; contadorB++){
      aux->vecinos[contadorA][contadorB]=0;//ninguno nodo sera vecino de manera predeterminada
    }
  }
  int tiempo=0;
  return (aux);
}

//if(grafo->nombre=="A"){} //base para no tener que crear mas de un vecino

Nodo *agrega_elementos(Nodo grafo){
  grafo->nombre[0]=("A");
  grafo->nombre[1]=("B");
  grafo->nombre[2]=("C");
  grafo->nombre[3]=("D");
  grafo->nombre[4]=("E");
  grafo->nombre[5]=("F");
  grafo->nombre[6]=("G");
  grafo->nombre[7]=("H");
  grafo->vecinos[0][1]=1;
  grafo->vecinos[0][2]=1;
  grafo->vecinos[0][5]=1;
  grafo->vecinos[1][0]=1;
  grafo->vecinos[1][2]=1;
  grafo->vecinos[1][7]=1;
  grafo->vecinos[2][0]=1;
  grafo->vecinos[2][1]=1;
  grafo->vecinos[2][3]=1;
  grafo->vecinos[2][4]=1;
  grafo->vecinos[3][2]=1;
  grafo->vecinos[3][5]=1;
  grafo->vecinos[3][6]=1;
  grafo->vecinos[4][2]=1;
  grafo->vecinos[4][6]=1;
  grafo->vecinos[4][7]=1;
  grafo->vecinos[5][0]=1;
  grafo->vecinos[5][3]=1;
  grafo->vecinos[5][6]=1;
  grafo->vecinos[6][3]=1;
  grafo->vecinos[6][4]=1;
  grafo->vecinos[6][5]=1;
  grafo->vecinos[6][7]=1;
  grafo->vecinos[7][1]=1;
  grafo->vecinos[7][4]=1;
  grafo->vecinos[7][6]=1;
  return (grafo);
}
