#include <stdio.h>
#include <stdbool.h>

void main() {
    int p, t, v;
    int num, resol;
    FILE *arquivo; 
    arquivo = fopen("entr.txt", "r");
    if (arquivo == NULL){
        printf("Arquivo não encontrado!\n");
    }

    resol = 0;

    fscanf(arquivo, "%d", &num);

    while(num >= 0){
        fscanf(arquivo, "%d %d %d", &p, &t, &v);
        if ((p + v) == 2 || (p + t) == 2 || (t + v) == 2){
            resol = resol + 1;
        } 
        num = num - 1;
    }

    printf("O trio poder resolver %d perguntas\n", resol);
    fclose(arquivo);

}