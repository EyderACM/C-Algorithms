#include <stdio.h>

void queDia(int);

int main()
{
    int dia = 1;
    printf("Introduce the number of a day, the days being 1 to 7 \n");
    scanf("%d", &dia);

    queDia(dia);
	return 0;
}

void queDia(int diaDeSemana){
    switch(diaDeSemana){
    case 1:
        printf("El dia es lunes");
        break;
    case 2:
        printf("El dia es Martes");
        break;
    case 3:
        printf("El dia es Miércoles");
        break;
    case 4:
        printf("El dia es Jueves");
        break;
    case 5:
        printf("El dia es Viernes");
        break;
    case 6:
        printf("El dia es Sábado");
        break;
    case 7:
        printf("El dia es Domingo");
        break;
    default:
        printf("El dia no es valido");
    }
}
