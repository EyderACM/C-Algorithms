#include <stdio.h>

int main()
{
    int number, times;
    printf("Ingresa el numero a contar y la cantidad de veces que se le restara ");
    scanf("%i", &number);
    scanf("%i", &times);

    for(int i = 0; i < times; i++){
        if((number%10) != 0){
            number--;
        }else {
            number /= 10;
        }
    }
    printf("%i", number);
}

