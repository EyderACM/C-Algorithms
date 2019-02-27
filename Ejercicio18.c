#include <stdio.h>

int calculadora(int, int, char);

int main(){

    int numero1, numero2, resultado;
    char operacion;

    printf("Introduce el primer numero\n");
    scanf("%d", &numero1);
    printf("Introduce el segundo numero\n");
    scanf("%d", &numero2);
    printf("Introduce una operacion a realizar\n");
    scanf(" %c", &operacion);

    resultado = calculadora(numero1, numero2, operacion);
    printf("El resultado es de %d", resultado);

    return 0;
}

int calculadora(int numero1, int numero2, char operacion){
    int resultado = 0;
    switch(operacion){
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            resultado = numero1 / numero2;
            break;
        case '%':
            resultado = numero1 % numero2;
            break;
    }
    return resultado;
}
