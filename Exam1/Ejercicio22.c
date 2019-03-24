#include <stdio.h>

int main(){

    int numero, copia = 0;
    printf("Introduce un numero \n");
    scanf("%d", &numero);

    for(int i = (numero-1); i > 1; i--){
        numero *= i;
    }

    printf("El factorial es de: %d", numero);

    return 0;
}
