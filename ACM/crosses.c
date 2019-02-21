#include <stdio.h>

int main()
{
   char matrix[500][500];
   int size;
   int howManyX = 0;
   printf("Ingresa el tamaño de la matriz \n");
   scanf("%i", &size);

   for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("Posicion: %i, %i \n", i, j);
            scanf(" %c", &matrix[i][j]);
        }
   }

   for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(matrix[i][j] == *"X"){
                if(matrix[i-1][j-1] == *"X" && matrix[i-1][j+1] == *"X" && matrix[i+1][j-1] == *"X" && matrix[i+1][j+1] == *"X"){
                    howManyX++;
                }
            }
        }
   }

   printf("%i", howManyX);
}

