#include "Cola.h"

struct Cola{
    int primero;
    int ultimo;
    int lista[100];
};

Cola crearCola(){
	Cola c;
	c.primero=1;
	c.ultimo=0;
	return c;
}
int isEmpty(Cola c){
	if(c.primero==c.ultimo+1)
		return 1;
	return 0;
}
void encolar(Cola *c,int x){
	c->lista[c->ultimo]=x;
	c->ultimo+=1;
}
	
int desencolar(Cola *c){
	if((isEmpty(*c))==1)
		printf("la cola está vacía \n");
	else{
		int aux = c->lista[c->primero-1];
		c->primero++;
		if(c->primero==c->ultimo+1){
	
			*c=crearCola();
		}
		return aux;
	}
}

int first(Cola c){
	return c.lista[c.primero-1];
}
