#include <bits/stdc++.h>
using namespace std;

int main(){

    //Indice de cada elemento de acordo com seu peso, Como o vetor deve apresentar as moedas em ordem crescente.
    //A moeda mais leve vem no índice 0 e a mais pesada no 2.
    int pesado = 2, medio = 1, leve = 0; 

    //Vetor de caracteres que gravará a ordem das moedas
    vector <pair <int, char>> coins(3);
    coins[0] = {0, 'A'};
    coins[1] = {0, 'B'};
    coins[2] = {0, 'C'};


    //String que irá receber os resultados
    string input;
    for (int i = 0; i < 3; i++){
        cin >> input;
        if (input[1] == '>'){

            //Se uma moeda é mais pesada que outra, incremento 1 em seu 'peso'
            if (input[0] == 'A')      coins[0].first--;
            else if (input[0] == 'B') coins[1].first--;
            else                      coins[2].first--;
        } else{

            //Se uma moeda é mais leve que outra, decremento 1 em seu 'peso'
            if (input[2] == 'A')      coins[0].first--;
            else if (input[2] == 'B') coins[1].first--;
            else                      coins[2].first--;
        }
    }
    sort(coins.rbegin(), coins.rend());

    if (coins[leve].first == 0 && coins[medio].first == -1 && coins[pesado].first == -2)
        for (int i = 0; i < 3; i++) cout << coins[i].second;
    else{
        cout << "Impossible";
    }

    cout << endl;

    return 0;
}