/*
 Ejercicio 3. Convirtiendo a Binario
*/

#include <math.h>
#include<stdio.h>

void puro();
void complemento_a2();

int main(){
    short opcion=0;
    while (1){
        printf("\n\tEJERCICIO 3\n");
        printf("\n\tHECHO POR: HANNY CARBALLO\n");
        printf("¿Con que codificacion desea realizar la conversion?\n");
        printf("1) Binario puro.\n");
       //  printf("2) Punto fijo.\n");
        printf("2) Representacion de complemento a 2. \n");
        printf("3) Salir.\n");
        scanf("%d", &opcion);
        
        switch(opcion){
            case 1:
                 puro();
                 break;
            
         //   case 2:
         //      
         //    break;
            
            case 2:
                 complemento_a2();
                 break;

            case 3:
            return 0;
            default:
            printf("Opción no valida.\n");
            }
            }
            return 0;
            }

void puro(){
     int num = 0, residuo, i=0;
    int elementos[10];
    for (i=0;i<10;i++){
        printf("Ingresa los elementos del arreglo %d: ", i);
        scanf("%d", &elementos[i]);
    }
    
   
    scanf("%d", &elementos);

    while(elementos[i]!=0){
        residuo=elementos[i]%10;
        elementos[i] /=10;
        num+=residuo*pow(2,i);
        i++;
    }
    
    printf("Conversión binario puro\n Tu número binario en decimal es: %d\n", num);
}

void complemento_a2(){
    int elementos[10];
    int i, j;
    for (i=0;i<10;i++){
        printf("Ingresa los elementos del arreglo %d: ", i);
        scanf("%d", &elementos[i]);
    }

    char binario[j+1];
    char complementoa1[j+1];
    char complementoa2[j+1];
    int num=1;

    for (int i=0; i<j;i++){
        if (binario[i]=='0'){
            complementoa1[i]='1';
        }

        else
            if(binario[i]=='1');
            complementoa1[i]='0';
    }
    complementoa1[j]='0';
    printf("El complemento a 1 es:%s", complementoa1);

    for(int i=j-1;i>=0;i--){
        if(complementoa1[i]=='1' && num==1){
            complementoa2[i]='0';
        }

        else
            if(complementoa1[i]=='0'&&num==1){
                complementoa2[i]='1';
                num=0;
            }

            else{
                complementoa2[i]=complementoa1[i];
            }
    }
    complementoa2[j]='0';
    printf("El complemento a 2 es: %s", complementoa2);
}

/*void punto_fijo(){
    int elementos[10];
    int i, j;
    for (i=0;i<10;i++){
        printf("Ingresa los elementos del arreglo %d: ", i);
        scanf("%d", &elementos[i]);
    }
}*/
