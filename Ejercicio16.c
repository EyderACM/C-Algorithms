#include <stdio.h>

void calculoMedia(float*, float*, float*, int* cantidad);

int main(){
    float numero, suma = 0, media;
    int cantidad;


    calculoMedia(&numero, &suma, &media, &cantidad);

    printf("La cantidad de numeros es %d, la suma es de %f y la media de %f ", cantidad, suma, media);
    return 0;
}

void calculoMedia(float *numero, float *suma, float *media, int *cantidad){
    for(*cantidad = -1; *numero != 0; *cantidad = *cantidad + 1){
        printf("Introduce un numero \n");
        scanf("%f", numero);

        (*numero != 0) ? (*suma = *suma + *numero) : 0;
    }
    *media = *suma/(*cantidad);
}

