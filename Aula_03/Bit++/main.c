#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char operacao[3];
    int n = 0, x = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%s", operacao);

        if (strcmp(operacao, "++X") == 0 || strcmp(operacao, "X++") == 0){
            x++;
        } else if (strcmp(operacao, "--X") == 0 || strcmp(operacao, "X--") == 0){
            x--;
        }
    }

    printf("%d", x);
    return 0;
}