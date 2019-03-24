#include <stdio.h>

int main(){

    int dia1, dia2, mes1, mes2, year1, year2, biggestDate;
    printf("Ingresa el primer dia, mes y year de forma consecutiva\n");
    scanf("%d", &dia1);
    scanf("%d", &mes1);
    scanf("%d", &year1);
    printf("Ingresa el segundo dia, mes y year de forma consecutiva\n");
    scanf("%d", &dia2);
    scanf("%d", &mes2);
    scanf("%d", &year2);

    if(year1 > year2){
        biggestDate = 1;
    }else if(year2 > year1){
        biggestDate = 0;
    }else if(mes1 > mes2){
        biggestDate = 1;
    }else if(mes2 > mes1){
        biggestDate = 0;
    }else if(dia1 > dia2){
        biggestDate = 1;
    }else if(dia2 > dia1){
        biggestDate = 0;
    }else{
        biggestDate = 2;
    }

    switch(biggestDate){
        case 0:
            printf("La fecha mas grande es %d/%d/%d", dia2, mes2, year2);
            break;
        case 1:
            printf("La fecha mas grande es %d/%d/%d", dia1, mes1, year1);
            break;
        case 2:
            printf("Las fechas son iguales");
            break;
    }

    return 0;
}
