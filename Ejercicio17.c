#include <stdio.h>

int determinarAngulos(float, float);
void imprimirAngulos(int);

int main(){

    float angulo1, angulo2;
    int tipoAngulo;
    printf("Inserta angulo 1\n");
    scanf("%f", &angulo1);
    printf("Inserta angulo 2\n");
    scanf("%f", &angulo2);

    tipoAngulo = determinarAngulos(angulo1, angulo2);
    imprimirAngulos(tipoAngulo);

    return 0;
}

int determinarAngulos(float angulo1, float angulo2){
    int tipoAngulos = 0;

    if(angulo1 == angulo2){
        tipoAngulos = 6;
    }else if(angulo1 > 180 && angulo2 > 180){
        tipoAngulos = 1;
    }else if(angulo1 == 180 && angulo2 == 180){
        tipoAngulos = 2;
    }else if(angulo1 > 90 && angulo2 > 90){
        tipoAngulos = 3;
    }else if(angulo1 == 90 && angulo2 == 90){
        tipoAngulos = 4;
    }else if(angulo1 < 90 && angulo2 < 90){
        tipoAngulos = 5;
    }
    return tipoAngulos;
}

void imprimirAngulos(int tipoAngulo){
    switch(tipoAngulo){
        case 1:
            printf("Angulos concavos");
            break;
        case 2:
            printf("Angulos llanos");
            break;
        case 3:
            printf("Angulos obtusos");
            break;
        case 4:
            printf("Angulos rectos");
            break;
        case 5:
            printf("Angulos agudos");
            break;
        case 6:
            printf("Angulos iguales");
            break;
    }
}
