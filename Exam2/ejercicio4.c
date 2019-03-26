#include <stdio.h>
#include <stdlib.h>

void definirMatriz(int[10][10]);
void imprimirMatriz(int[10][10]);

int main() {
  int matriz[10][10];
  definirMatriz(matriz);
  imprimirMatriz(matriz);
}

void definirMatriz(int matriz[10][10]){  
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){    
      printf("\nIngresa el valor en la fila %d, columna %d\n", i, j);
      scanf("%d", &matriz[i][j]);
    } 
  }
}

void imprimirMatriz(int matriz[10][10]){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){    
      printf("\nvalor en la fila %d, columna %d, es de %d\n", i, j, matriz[i][j]);      
    } 
  }
}