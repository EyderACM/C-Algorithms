#include <stdio.h>

int main(){
    int numero, cantidadMultiplos = 0;
    printf("Introduce un numero \n");
    scanf("%d", &numero);

    cantidadMultiplos = (numero-1) / 5;
    printf("Hay %d cantidad de multiplos de 5 entre n y 1", cantidadMultiplos);

    return 0;
}
