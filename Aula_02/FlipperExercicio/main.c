#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    
    bool port1, port2;

    //Criando arquivo
    FILE *arquivo;
    arquivo = fopen("entrada.txt", "r");

    if (arquivo == NULL){
        printf("Arquivo Não Encontrado\n");
        return;
    }

    fscanf(arquivo, "%d %d", &port1, &port2);

    if (port1){
        if (port2){
            printf(" A\n");
        } else {
            printf(" B\n");
        }
    } else {
        printf(" C\n");
    }

}