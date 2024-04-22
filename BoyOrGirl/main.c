#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX_USERNAME 100

bool CompareCharac(char username2[], char caracter){
    for (int c = 0; c < MAX_USERNAME; c++){ 
        if(username2[c] == caracter){
            return false;
        }
    }
    return true;
}

void main(){

    char username[MAX_USERNAME], username2[MAX_USERNAME];
    int OddCharac = 0;

    printf("Qual o username do usuário? ");
    scanf("%s", username);

    for (int c = 0; c < MAX_USERNAME; c++){
        if (CompareCharac(username2, username[c])){
            username2[c] = username[c];
            OddCharac++;
        }
    }

    if (OddCharac % 2 == 0){
        printf("IGNORE HIM\n");
    } else{
        printf("CHAT WITH HER\n");
    }
    return;

}