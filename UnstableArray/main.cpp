#include <fstream>
#include <iostream>
#include <cstdlib>
#include <stdbool.h>
#include <math.h>
using namespace std;

int MaxPossible(int a[], int aux){
    int MaxValue = 0;
    for (int c = 0; c < aux; c++){
        MaxValue += abs(a[c] - a[c + 1]);
    }
    return MaxValue;
}

int SomaVetor(int a[], int aux){
    int soma = 0;
    for (int c = 0; c <= aux; c++){
        soma += a[c];
    }
    return soma;
}

void CriaVetor(int n, int m){
    int aux = 0, a[n];
    if (n == 1){
        a[aux] = m;
    } else{
        while(true){
            a[aux] = (rand() % m) + 1;
            if (SomaVetor(a, aux) > m){
                a[aux] -= SomaVetor(a, aux) - m;
                break;
            } else if(SomaVetor(a, n) == m){
                break;
            }

            aux++;
            if (aux > n){
                a[aux - 1] = m - SomaVetor(a, n);
                break;
            }
        }
    }   
    
    for (int c = 0; c <= aux; c++){
        cout << c << ": " << a[c] << endl;
    }   

    cout << MaxPossible(a, aux) << endl;


    return;
}

int main(){

    ifstream arquivo("entrada.txt");
    if (!arquivo.is_open()){
        cout << "Arquivo não encontrado" << endl;
        return -1;
    }
    srand((unsigned) time(NULL));
    int teste, n, m;
    arquivo >> teste;
    
    for (int c = 0; c < teste; c++){
        arquivo >> n;
        arquivo >> m;
        cout <<"Vetor: " << c + 1 << endl;
        CriaVetor(n, m);  
    }

    return 0;
}