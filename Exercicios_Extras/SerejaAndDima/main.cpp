#include <bits/stdc++.h>
using namespace std;

int main() {
    char jog = 's';
    int n, entrada, fim, inicio, sereja = 0, dima = 0;
    cin >> n;
    inicio = 0;
    fim =  n - 1;

    int cards[n];
    for (int i = 0; i < n; i++){
        cin >> cards[i]; 
    }

    while (n){
        if (cards[inicio] > cards[fim]){
            if (jog == 's'){
                sereja += cards[inicio];
                jog = 'd';
            } else{
                dima += cards[inicio];
                jog = 's';
            } 
            inicio++;
        } else{
            if (jog == 's'){
                sereja += cards[fim];
                jog = 'd';
            } else{
                dima += cards[fim];
                jog = 's';
            }
            fim--;
        }
        n--;
    }

    cout << sereja << endl;
    cout << dima << endl;    

    return 0;
}