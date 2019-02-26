#include <stdio.h>

void procedimiento(int);

int main(){

    int numero;
    printf("Introduce un numero \n");
    scanf("%d", &numero);

    procedimiento(numero);

    return 0;
}

void procedimiento(int numero){
    int esBisiesto = 0;
    if((numero % 100) == 0){
        if((numero % 400) == 0){
            esBisiesto = 1;
        }
    }else {
        esBisiesto = 1;
    }

    if(esBisiesto){
        printf("El año %d es bisiesto", numero);
    }else {
        printf("El año %d no es bisiesto", numero);
    }
}
