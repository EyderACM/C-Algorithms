#include <stdio.h>

int main()
{
    int people, opinion;
    int isHard = 0;
    printf("a cuantas personas se les pregunto? \n");
    scanf("%i", &people);

    for(int i = 0; i < people; i++){
        printf("If the problem is hard press 1, otherwise press 0 \n");
        scanf("%i", &opinion);
        if(opinion == 1){
            isHard = 1;
        }
    }

    if(isHard){
        printf("HARD");
    }else{
        printf("EASY");
    }
}

