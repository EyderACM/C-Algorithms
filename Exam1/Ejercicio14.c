#include <stdio.h>

void medidor(float);

int main(){

    float velocidad = 0;
    printf("Introduce una velocidad \n");
    scanf("%f", &velocidad);

    medidor(velocidad);

    return 0;
}

void medidor(float velocidad){
    if(velocidad > 100){
        printf("Estas sobre el limite");
    }else if(velocidad == 0){
        printf("Detenido");
    }
}
