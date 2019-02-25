#include <stdio.h>

void procedimiento(int);

int main(){

    int numero;
    printf("Inserta un numero \n");
    scanf("%d", &numero);

    procedimiento(numero);

    return 0;
}

void procedimiento(int numero){
    if(numero <= 100){
        numero = 100;
    }else {
        numero = (numero + 99) / 100 ;
        numero = numero * 100;
    }
    printf("El redondeo es igual a: %d \n", numero);
}
