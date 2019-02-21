#include <stdio.h>

int contadorDecimales(float);

int main()
{
    float numero;
    scanf("%f", &numero);
    contadorDecimales(numero);
}

int contadorDecimales(float _numeroDecimal){
    int times = 10;
    int contadorDecimales = 0;
    float parteDecimal = 0;

    parteDecimal = _numeroDecimal - (int)_numeroDecimal;
    while(parteDecimal > 0.0){
        contadorDecimales++;
        parteDecimal = parteDecimal * 10.0;

        parteDecimal = parteDecimal - (int)parteDecimal;
        printf("Iteracion %d y parteDecimal: %f \n", contadorDecimales, parteDecimal);
        times--;
    }

    return contadorDecimales;
}

