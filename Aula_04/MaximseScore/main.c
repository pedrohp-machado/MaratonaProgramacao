#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int getScore(int n){
    int a[n], score = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), compare);

    for(int i = 0; i < n; i += 2){
        if (i + 1 < n)
            score += fmin(a[i], a[i + 1]); 
    }

    return score;
}

int main(){
    int test = 0, n = 0;
    scanf("%d", &test);

    for (int i = 0; i < test; i++){
        scanf("%d", &n);
        printf("%d\n", getScore(2*n));
    }
    return 0;
}