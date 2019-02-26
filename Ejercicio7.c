#include <stdio.h>

void procedimiento(float);

int main(){

    float numero;
    printf("Introduce el numero \n");
    scanf("%f", &numero);

    procedimiento(numero);

    return 0;
}

void procedimiento(float numero){
    float bonus = 1;
    if(numero > 5000){
        bonus = .20;

    }else if(numero > 3000){
        bonus = .15;
    }else if(numero > 1000){
        bonus = .05;
    }

    if(bonus < 1){
        float aumento = bonus*numero;
        printf("El aumento es: %f, el salario es: %f, y el total es de: %f", aumento, numero, (numero + aumento));
    }else {
        printf("El numero es de %f", numero);
    }
}


