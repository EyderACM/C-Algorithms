#include <stdio.h>

float exponencial(float, int);
float factorial(float);

int main(){

    float suma = 1, numero;
    int iteraciones;
    printf("Introduce un numero \n");
    scanf("%f", &numero);
    printf("Cantidad de veces que se repetira la secuencia \n");
    scanf("%d", &iteraciones);

    while(iteraciones > 1){
        iteraciones--;
        suma += exponencial(numero, iteraciones) / factorial(iteraciones);
    }

    printf("El resultado de la sucesion es de: %f", suma);

    return 0;
}

float exponencial(float base, int exponente){
    float operacion = 1;
    for(int i = exponente; i > 0; i--){
        operacion *= base;
    }
    return operacion;
}

float factorial(float numero){
    for(int i = (numero-1); i > 0; i--){
        numero *= i;
    }
    return numero;
}


