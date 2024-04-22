#include <fstream>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {

    int linCol = 0;
    cout << "Quantas linhas/colunas a matriz deve ter?" << endl;
    cin >> linCol;

    int matriz[linCol][linCol], max = -1;

    for (int lin = 0; lin < linCol; lin++){
        for (int col = 0; col < linCol; col++){
            if (lin == 0 || col == 0) {
                matriz[lin][col] = 1;
            } else{
                matriz[lin][col] = matriz[lin - 1][col] + matriz[lin][col - 1];
                if (matriz[lin][col] > max){
                    max = matriz[lin][col];
                }
            }
        }
    }

    cout << "O maior elemento possível da matriz é: " << max << endl;


    return 0;
}