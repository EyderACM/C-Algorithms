#include <stdio.h>

float procedimiento(float, float);

int main(){
    float numero1, numero2, mayor;
    printf("Ingresa el primer numero \n");
    scanf("%f", &numero1);
    printf("Ingresa el segundo numero \n");
    scanf("%f", &numero2);

    mayor = procedimiento(numero1, numero2);
    printf("El numero mayor es %f", mayor);
    return 0;
}

float procedimiento(float number1, float number2){
    float mayor = number1;
    if(number2 > number1){
        mayor = number2;
    }
    return mayor;
}
