#include <stdio.h>
#define Nodos 7

typedef struct {
  int frente;
  int detras;
  int datos[Nodos];
}	cola;

cola *iniciar_elemento_cola(){
  cola *aux;
  aux->detras=-1;
  aux->frente=-1;
  return(aux);
}

int vacio_elemento_cola(cola *aux){
	if ((aux->frente == aux->detras)&&(aux->detras == -1)) {
		return 1;
	}
    return 0;
}

int completo_elemento_cola(cola *_aux){
	int aux = _aux->detras;
    if (aux == Nodos-1){
		aux = 0;
	}
    else{
		aux = aux + 1;
	}
    if(aux == _aux->frente){
    	return 1;
    }
    return 0;
}

cola *agregar_elemento_cola(cola *aux,int elemento){
	if(!completo_elemento_cola(aux)){
		if(!vacio_elemento_cola(aux)){
		   if (aux->detras == Nodos-1){
				aux->detras= 0;
			}
			else{
				aux->detras = aux->detras+1;  
			}
		}
		else{
			aux->frente = aux->detras = 0;
		}
	aux->datos[aux->detras]=elemento;    
	}
	return  (aux);
}

cola *eliminar_elemento_cola(cola *aux){
	if (!vacio_elemento_cola(aux)){
		if(aux->frente == aux->detras){
			aux->frente = aux->detras = -1;
		}
		else{
			if (aux->frente == Nodos-1){
				aux->frente = 0;
			}
			else{
				aux->frente = aux->frente + 1;
			}
		}    
	}
	return(aux);
}
