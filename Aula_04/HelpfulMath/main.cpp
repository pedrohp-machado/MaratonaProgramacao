#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int compara(void const *a, void const *b){
    int _a = *(int*)a;
    int _b = *(int*)b;

    if (_a > _b){
        return 1;
    } else if(_a == _b){
        return 0;
    } else {
        return -1;
    }
}

int main() {

    char operacao[100];
    int c[100], i = 0, j = 0;

    fgets(operacao, 100, stdin);
    fflush(stdin);

    while (operacao[i] != '\0'){
        if (operacao[i] != '+'){ 
            c[j] = int(operacao[i]) - '0';
            j++;
        }

        i++;
    }
    if (j == 1){
        cout << c[0] << endl;
        return 0;
    }
    qsort(c, j + 1, sizeof(int), compara);

    for (int i = 0; i < j; i++){
        if (i + 1 == j){
            cout << c[i] << endl;
        } else{
            cout << c[i] << "+";
        }
    }

    cout << endl;
    return 0;
}