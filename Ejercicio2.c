#include <stdio.h>

int main()
{
    int numero;
    int inverso = 0;
    scanf("%i", &numero);
    printf("Ingresa el numero que deseas invertir \n");

    while(numero > 0){
        inverso = inverso * 10;
        inverso += numero % 10;
        numero = numero / 10;
    }
    printf("%i", inverso);

	return 0;
}
