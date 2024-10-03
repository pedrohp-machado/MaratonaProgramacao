#include <bits/stdc++.h>
using namespace std;

int main(){

    bool sort = false;
    int numColunas, c, i;
    cin >> numColunas;

    int colunas[numColunas];
    for (c = 0; c < numColunas; c++){
        cin >> colunas[c];
    }
    c = 0;

    while(!sort) {
        if (colunas[c] > colunas[c + 1]){
            i = c + 1;
            while(colunas[c] > colunas[i]) i++;
            colunas[i]++;
            sort = false;
            c = 0;
        } else sort = true;
    }

    for (c = 0; c < numColunas; c++)
        cout << colunas[c] << " ";

    return 0;
}