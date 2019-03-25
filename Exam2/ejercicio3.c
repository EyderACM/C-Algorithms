#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calificando(int[], float[]);
void llenadoCalificacion(int[]);


int main(int argc, char** argv) {
  int calificaciones[100];
  float promedioCalificaciones[20];
  llenadoCalificacion(calificaciones);
  calificando(calificaciones, promedioCalificaciones);
}

void llenadoCalificacion(int calificaciones[100]) {
  srand(time(0));
  int calificacion = 0;
  for(int i = 0; i < 100; i++){
    calificacion = rand() % 100 + 1;
    calificaciones[i] = calificacion;
    printf(" %d ", calificaciones[i]);
  }
}

void calificando(int calificaciones[100], float promedioCalificaciones[100]){
  float suma = 0, promedioCalc = 0;
  for(int i = 0, j = 0; i < 100; i++){    
    suma += calificaciones[i];
    if((i+1) % 5 == 0){
      promedioCalc = suma / 5;
      promedioCalificaciones[j] = promedioCalc;      
      printf("\nEl promedio del alumno %i es de %lf\n", j, promedioCalificaciones[j]);
      promedioCalc = 0;
      suma = 0;
      j++;
    }
  }
}