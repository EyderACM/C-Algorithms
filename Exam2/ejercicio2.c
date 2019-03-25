#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

int menorElemento(int[12][15]);
int sumaElementos(int[12][15]);
int sumaColumna(int[12][15]);
void llenarVector(int[12][15]);
void imprimirVector(int[12][15]);

int main(int argc, char** argv) {
  int matriz[12][15], menor = 0, sumaFilas, sumaColumnas;
  llenarVector(matriz);
  imprimirVector(matriz);
  menor = menorElemento(matriz);
  sumaFilas = sumaElementos(matriz);
  sumaColumnas = sumaColumna(matriz);
  printf("\nEl numero menor es de %d\n", menor);
  printf("\nLa suma de las primeras 5 filas es de %d\n", sumaFilas);
  printf("\nLa suma de las ultimas 5 columnas es de %d\n", sumaColumnas);
}

void llenarVector(int matriz[12][15]){
  srand(time(0));
  int numero = 0;
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 15; j++){
      numero = rand() % 100 + 1;
      matriz[i][j] = numero;
    }  
  }  
}

void imprimirVector(int matriz[12][15]) {
  printf("\n");
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 15; j++){
      printf(" %d ", matriz[i][j]);            
    }  
    printf("\n");
  }  
}

int menorElemento(int matriz[12][15]){
  int menor = matriz[0][0];
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 15; j++){
      (matriz[i][j] < menor) ? menor = matriz[i][j] : 0;
    }  
  }  
  return menor;
}

int sumaElementos(int matriz[12][15]){
  int suma = 0;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 15; j++){
      suma += matriz[i][j];
    }  
  }  
  return suma;
}

int sumaColumna(int matriz[12][15]){
  int suma = 0;
  for(int i = 0; i < 12; i++){
    for(int j = 14; j >= 10; j--){
      suma += matriz[i][j];
    }  
  }  
  return suma;
}
