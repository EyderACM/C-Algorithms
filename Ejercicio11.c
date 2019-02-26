#include <stdio.h>

int main(){
    float retiro = 0, saldo;

    while(retiro >= 0){
        printf("\nCuanto deseas retirar? \n");
        scanf("%f", &retiro);
        if(retiro <= 3000 && retiro > 0){
            saldo += retiro;
        }else if(retiro > 0){
            printf("Cantidad maxima excedida \n");
        }
        printf("Tu saldo es de: %f", saldo);
    }
    return 0;
}
