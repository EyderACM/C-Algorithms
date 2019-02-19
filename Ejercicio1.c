#include <stdio.h>

int esMayuscula(int);
void salidas(int);

int main()
{
    int codigoASCII;
    int isUppercase;

    scanf("%i", &codigoASCII);
    isUppercase = esMayuscula(codigoASCII);
    salidas(isUppercase);

	return 0;
}

int esMayuscula(int codigo){
    int esMayus = 0;
    if(codigo > 64 && codigo < 91){
        esMayus = 1;
    }
    return esMayus;
}

void salidas(int valorVerdad){
    if(valorVerdad == 1){
        printf("Es mayuscula");
    }else{
        printf("Es minuscula");
    }
}

