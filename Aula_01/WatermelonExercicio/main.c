#include <stdio.h>

void main(){
    int peso, part;

    printf("Qual o peso da melancia? ");
    scanf("%d", &peso);

    if (peso % 2 == 0){
        printf("É possível\n");
    } else{
        printf("Não é possível\n");
    }

}