#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compara(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

void balanceaProblema(int n, int k){
    int a[n], remove = 0;

    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), compara);

    for (int i = 0; i < n - 1; i++){    
        if (abs(a[i] - a[i + 1]) > k){
            if (abs(a[i] - a[i - 1] <= k)){
                for(int c = i + 1; c < n - 1; c++){
                    a[c] = a[c + 1];
                }
                remove++;
                i = -1;
                n--;
            }else{
                for(int c = i; c < n - 1; c++){
                    a[c] = a[c + 1];
                }
                remove++;
                i = -1;
                n--;
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\n%d\n", remove);
}

int main() {

    int testes, n, k;
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++){
        scanf("%d %d", &n, &k);
        balanceaProblema(n, k);
    }

    return 0;
}