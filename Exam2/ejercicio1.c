#include <stdio.h>
#define SIZE 256


void inicializarNumero(int[]);
void leerNumero(int[]);
void sumarNumeros(int [], int[], int*);
int vuelveEntero(int []);
int getSize(int);

int main(int argc, char** argv) {
    int vector1[SIZE], vector2[SIZE], vector3[SIZE];
    inicializarNumero(vector1);
    inicializarNumero(vector2);
    inicializarNumero(vector3);
    printf("\nIngresa los datos digitos vector 1\nIngresa un numero negativo para terminar\n");
    leerNumero(vector1);
    printf("\nIngresa los datos digitos vector 2\nIngresa un numero negativo para terminar\n");
    leerNumero(vector2);

    sumarNumeros(vector1, vector2, vector3);    

    printf("\n [ "); 
    for(int i = 0; *(vector3 + i) >= 0; i++){
        printf(" %d, ", *(vector3 + i));
    }
    printf(" ]");
}

void inicializarNumero(int vector[]){
    for(int i = 0; i < SIZE; i++){
        vector[i] = -1;
    }
}

void leerNumero(int vector[]){
    int numero = 0;
    for(int i = 0; numero >= 0 ; i++){
        printf("\nIngresa el digito numero %d\n", i);
        scanf("%d", &numero);
        (numero >= 0) ? (vector[i] = numero) : 0;
    }            
}

void sumarNumeros(int vector1[], int vector2[], int* vectorSuma){
    int numero1, numero2, suma, sumaSize;    
    numero1 = vuelveEntero(vector1);
    numero2 = vuelveEntero(vector2);
    suma = numero1 + numero2;
    sumaSize = getSize(suma);
    for(int i = sumaSize, digito = 0; i >= 0 ; i--){
        digito = suma%10;
        suma /= 10;
        vectorSuma[i] = digito;
    }
}

int vuelveEntero(int vector[]){
    int numero = 0;
    for(int i = 0; vector[i] >= 0; i++){
        numero *= 10;
        numero += vector[i];        
    }    
    return numero;
}

int getSize(int suma){
    int size = 0;
    while((suma/10) != 0){        
        suma/= 10;
        size++;
    }
    return size;
}
