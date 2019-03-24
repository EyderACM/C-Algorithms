#include <stdio.h>

int main(){

    int suma = 0, numero;
    printf("Introduce un numero \n");
    scanf("%d", &numero);

    while(numero > 0){
        suma += numero;
        numero--;
    }

    printf("La suma es de: %d", suma);

    return 0;
}
