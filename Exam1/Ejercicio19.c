#include <stdio.h>

float comparadorTres(float, float, float, float*);

int main(){

    float numero1, numero2, numero3, mayor = 0;
    printf("Introduce un numero\n");
    scanf("%f", &numero1);
    printf("Introduce un numero\n");
    scanf("%f", &numero2);
    printf("Introduce un numero\n");
    scanf("%f", &numero3);

    comparadorTres(numero1, numero2, numero3, &mayor);

    printf("El numero mayor es: %f", mayor);

    return 0;
}

float comparadorTres(float numero1, float numero2, float numero3, float* mayor){
    if(numero1 > numero2){
        if(numero1 > numero3){
            *mayor = numero1;
        }else{
            *mayor = numero3;
        }
    }else if(numero2 > numero3){
        *mayor = numero2;
    }else {
        *mayor = numero3;
    }
}
