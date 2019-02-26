#include <stdio.h>

void ordenamiento(float, float, float);
void esPitagoras(float, float, float);

int main(){

    float lado1, lado2, lado3;
    printf("Introduce el valor del primer lado \n");
    scanf("%f", &lado1);
    printf("Introduce el valor del segundo lado \n");
    scanf("%f", &lado2);
    printf("Introduce el valor del tercer lado \n");
    scanf("%f", &lado3);

    ordenamiento(lado1, lado2, lado3);

    return 0;
}

void ordenamiento(float lado1, float lado2, float lado3){
    float hipotenusa, cateto1, cateto2;

    if(lado1 > lado2){
        if(lado1 > lado3){
            hipotenusa = lado1;
            cateto1 = lado2;
            cateto2 = lado3;
        }else {
            hipotenusa = lado3;
            cateto1 = lado1;
            cateto2 = lado2;
        }
    }else if(lado2 > lado3) {
        hipotenusa = lado2;
        cateto1 = lado1;
        cateto2 = lado3;
    }else {
        hipotenusa = lado3;
        cateto1 = lado1;
        cateto2 = lado2;
    }
    esPitagoras(hipotenusa, cateto1, cateto2);
}

void esPitagoras(float hipotenusa, float cateto1, float cateto2){
    int esRectangulo = 0;
    if((hipotenusa*hipotenusa) == ((cateto1 * cateto1) + (cateto2*cateto2))){
        esRectangulo = 1;
    }
    esRectangulo ? printf("Es rectangulo") : printf("No es Rectangulo");
}
