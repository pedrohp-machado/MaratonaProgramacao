#include <bits/stdc++.h>
using namespace std;

int main(){

    int test, n;
    cin >> test;
    

    while (test--){
        //0 = Alice, 1 = Bob
        bool player = 1;
        cin >> n;
        
        vector <int> piles(n);
        for (int i = 0; i < n; i++) cin >> piles[i];
        int aux = 0, k;
        
        sort(piles.begin(), piles.end());

        while (aux < n){
            player = !player; 
            k = piles[aux];
            for (int i = aux; i < n; i++) piles[i] -= k;
            while (piles[aux] <= 0) aux++;        
        }

        if (player) cout << "Bob" << endl;
        else cout<< "Alice" << endl;
    }

    return 0;
}