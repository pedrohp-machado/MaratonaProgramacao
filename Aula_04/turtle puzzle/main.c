#include <stdio.h>
#include <stdlib.h>

void main(){
    int testes, tamanho, elementos, maxValue = 0;
    scanf("%d", &testes);
    
    for (int t = 0; t < testes; t++){
        scanf("%d", &tamanho);
        for(int e = 0; e < tamanho; e++){
            scanf("%d", &elementos);
            maxValue += abs(elementos);
        }

        printf("%d\n", maxValue);
        maxValue = 0;
    }
}