#include <bits/stdc++.h>
using namespace std;

int check(int vet[]){
    int zeros = 0;
    for(int i = 0; i < 3; i++){
        if (vet[i] == 0) zeros++;
    }

    if (zeros >= 2){ 
        return 0;
    } else return 1;
}

int main(){

    int test;
    cin >> test;

    while(test--){
        int p1, p2, p3, draws = 0;
        cin >> p1 >> p2 >> p3;

        int pt = p1 + p2 + p3; 

        if (pt % 2 != 0) cout << -1 << endl;
        else{
            int vet[3] = {p3, p2, p1};

            while(check(vet)){
                sort(vet, vet + 3);
                draws++;
                vet[2]--;
                vet[1]--;
            }
            cout << draws << endl;
        }
        
    }

    return 0;
}