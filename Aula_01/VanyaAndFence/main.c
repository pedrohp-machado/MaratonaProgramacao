#include <stdio.h>

void main(){ 

    FILE *arquivo = fopen("entrada.txt", "r");
    if (arquivo == NULL){
        printf("Arquivo não encontrado!");
    }

    int num, altcer, largcer, altamgs;
    num = altcer = largcer = altamgs = 0;

    fscanf(arquivo, "%d", &num);
    fscanf(arquivo, "%d", &altcer);

    for(int c = 0; c < num; c++){
        fscanf(arquivo, "%d", &altamgs);

        if (altamgs >= altcer){
            largcer += 2;
        } else{
            largcer += 1;
        }
    }
    printf("A largura da cerca deve ser: %d", largcer);
    fclose(arquivo);
}