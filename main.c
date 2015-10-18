#include <stdio.h>
#include <stdlib.h>
//#include "BFS.h"
#include "DFS.h"

int main(){
	Nodo *grafo;
	grafo=inicializa();
	grafo=agrega_elementos(grafo);
	//Busqueda_a_lo_ancho(grafo,3);
	Busqueda_profundidad(grafo,2);
}
