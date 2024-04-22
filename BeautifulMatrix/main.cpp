#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int matriz[5][5];
    int lin = 0, col = 0, moves = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> matriz[i][j];
            if (matriz[i][j] == 1){
                lin = i;
                col = j;
                i = j = 5;
            }
        }
    }

    moves += abs(lin - 2) + abs(col - 2);
    cout << "É preciso " << moves << " movimento(s)." << endl;
    return 0;
}