#include <stdio.h>

int main(){

    int test;
    scanf("%d", &test);

    while(test--){
        int len, badOddNumbers = 0, badEvenNumbers = 0;
        scanf("%d", &len);

        int array[len];
        for (int c = 0; c < len; c++) scanf("%d", &array[c]); 

        for (int c = 0; c < len; c++){
            if (array[c] % 2 != c % 2){
                if (array[c] % 2) badOddNumbers++;
                else badEvenNumbers++;
            }
        }

        if(badEvenNumbers == badOddNumbers) printf("%d\n", badEvenNumbers);
        else printf("-1\n");
    }

    return 0;
}