#include <fstream>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    ifstream arquivo("entrada.txt");
    int qntd = 0, entr = 0; 
    bool A = 0, B = 0;

    if (!arquivo.is_open()){
        cout << "Arquivo Não Encontrado!" << endl;
    }
    cout << "Arquivo Encontrado!" << endl;

    arquivo >> qntd;
    
    for (int c = 0; c < qntd; c++){
        arquivo >> entr;
        if (entr == 1){
            A = !A;
        } else if (entr == 2){
            A = !A;
            B = !B;
        } else{
            cout << "Verifique Seus Dados" << endl;
        }
    }

    if (A){
        cout << "A está Acesa!" << endl;
    } else{
        cout << "A está Apagada" << endl;
    }

    if(B){
        cout << "B está Acesa" << endl;
    } else{
        cout << "B está Apagada" << endl;
    }
    return 0;
}