#include <bits/stdc++.h>
using namespace std;

int main(){

    ifstream arquivo("entrada.txt");
    if (!arquivo.is_open()){
        cout << "[ERRO] Arquivo não encontrado" << endl;
    }

    int num, remo = 0;
    arquivo >> num;

    string stones;
    arquivo >> stones;

    for (int c = 0; c < num; c++){
        if (stones[c] == stones[c + 1]){
            remo++;
            stones[c + 1] = '-';
        }
    }

    cout << "É preciso remover " << remo << " Pedras." << endl;
    cout << "Rearranjo das Pedras: " << stones << endl;

    return 0;
}