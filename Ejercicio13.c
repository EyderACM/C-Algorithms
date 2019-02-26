#include <stdio.h>


int main(){

    int horaMilitar, horas, minutos, esTarde = 0, minutosMayoresA10;
    printf("Introduce la hora militar \n");
    scanf("%d",&horaMilitar);

    horas = horaMilitar/100;
    minutos = horaMilitar%100;

    if(horas > 12){
        esTarde = 1;
        horas -= 12;
    }

    (minutos < 10) ? (minutosMayoresA10 = 0) : (minutosMayoresA10  = 1);

    if(esTarde){
        if(minutosMayoresA10){
            printf("%d:%dPM", horas, minutos);
        }else{
            printf("%d:0%dPM", horas, minutos);
        }
    }else {
        if(minutosMayoresA10){
            printf("%d:%dAM", horas, minutos);
        }else{
            printf("%d:0%dAM", horas, minutos);
        }
    }


    return 0;
}
