#include <stdio.h>

void main(){
    int maior = -1, num;

    while (1){
        printf("Digite um valor: ");
        scanf("%d", &num);
        
        if (num == 0){
            break;
        } else{
            if (num > maior){
                maior = num;
            }
        }
    }

    printf("O maior número foi: %d\n", maior);
}