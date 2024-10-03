#include <stdio.h>

int main(){

    int shoes[4] = {0, 0, 0, 0};
    for (int i = 0; i < 4; i++) scanf("%d", &shoes[i]);

    int repete = 0, newShoes = 0;
    for (int i = 0; i < 3; i++){
        for (int c = i + 1; c < 4; c++){
            if (shoes[c] == shoes[i]) repete++;  
        }   
        if (repete >= 2) {
            newShoes = repete;
            i = 4;
        } else if (repete == 1){
            newShoes += repete;
            repete = 0;
        }
    }

    printf("%d\n", newShoes);
    return 0;
}