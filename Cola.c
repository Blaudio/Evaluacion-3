#include <stdio.h>
#define Nodos 7

typedef struct {
  int frente;
  int detras;
  int datos[Nodos];
}	cola;

cola iniciar_elemento_cola(){
	cola aux;
  aux->detras= -1;
  aux->frente= -1;
  return(aux);
}

int vacio_elemento_cola(cola q){
	if ((q->frente == q.detras)&&(q->detras == -1)) {
		return 1;
	}
    return 0;
}

int completo_elemento_cola(cola q){
	int aux = q->detras;
    if (aux == Nodos-1){
		aux = 0;
	}
    else{
		aux = aux + 1;
	}
    if(aux == q->frente){
    	return 1;
    }
    return 0;
}

cola agregar_elemento_cola(cola q,int elemento){
	if(!completo_elemento_cola(q)){
		if(!vacio_elemento_cola(q)){
		   if (q->detras == Nodos-1){
				q->detras= 0;
			}
			else{
				q->detras = q->detras+1;  
			}
		}
		else{
			q->frente = q->detras = 0;
		}
	q->datos[q->detras]=elemento;    
	}
	return  q;
}

cola eliminar_elemento_cola(cola q){
	if (!vacio_elemento_cola(q)){
		if(q->frente == q->detras){
			q->frente = q->detras = -1;
		}
		else{
			if (q->frente == Nodos-1){
				q->frente = 0;
			}
			else{
				q->frente = q->frente + 1;
			}
		}    
	}
	return(q);
}
