#include <stdio.h>

char* inverso(char[], int);

int main()
{
    char cadena[100] = "Prueba";
    char reverso[100];
    int length = 0;
    int i;
    scanf("%s", cadena);

    for(i = 0; cadena[i] != '\0'; i++){
        length++;
    }
    printf("%s", inverso(cadena, length));
	return 0;
}

char* inverso(char word[], int length){
    char reversed[length];
    int j = 0;
    for(int i = (length-1); i >= 0; i--){
        reversed[j] = word[i];
        j++;
    }
    reversed[length] = '\0';
    return reversed;
}
