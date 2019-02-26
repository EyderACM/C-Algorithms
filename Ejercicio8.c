#include <stdio.h>

void procedimiento(int, int);

int main(){

    int num1, num2;
    printf("Introduce el numero 1 \n");
    scanf("%d", &num1);
    printf("Introduce el numero 2 \n");
    scanf("%d", &num2);

    procedimiento(num1, num2);

    return 0;
}

void procedimiento(int num1, int num2){
    int esMultiplo = 0;
    if((num2 % num1) == 0){
        esMultiplo = 1;
    }

    if(esMultiplo){
        printf("El primer numero es multiplo del segundo");
    }else{
        printf("El primer numero no es multiplo del segundo");
    }
}
