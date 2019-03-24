#include <stdio.h>

int main(){

    int numero;
    printf("Introuce la cantidad de multiplos de 7 que deseas\n");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        printf("El multiplo #%i de 7 es: %i \n", i, (7*i));
    }

    return 0;
}
