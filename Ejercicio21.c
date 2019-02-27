#include <stdio.h>

int main(){

    int numero, copia = 0, suma = 0;
    printf("introduce un numero \n");
    scanf("%d", &numero);

    while(numero > 0){
        copia = numero;
        for(int i = (copia-1); i > 1; i--){
            copia *= i;
        }
        suma += copia;
        numero--;
    }

    printf("El resultado de la secuencia es de: %d", suma);

    return 0;
}
