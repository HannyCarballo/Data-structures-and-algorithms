/*
 Ejercicio 1. Corrigiendo el codigo
*/

#include<stdio.h>
int main(){
	int i,j,k;
	int arr[2][3][5]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60};
	int a1[10], a;
	char letra[]= "Algoritmos en C";
	printf("Imprime las posiciones de cada elemento del arreglo\n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				printf("Arreglo [%d][%d][%d]: %d",i,j,k,arr[k][j][i]);
				printf("\n");
			}
		}
	}
	
	printf("\n");
	printf("Asigna los elementos de un arreglo\n");
	for(a=0;a<10;a++){
		a1[a]=a+3;
		printf("Arreglo [%d]: %d",a,a1[a]);
		printf("\n");


	}	

    printf(" \n");
    printf("De acuerdo al indice que ingreses, imprimira el caracter correspondiente\n");
    printf("%c", letra[7]);		
	printf("%c", letra[5]);
	printf("%c", letra[6]);
	printf("%c", letra[3]);
}