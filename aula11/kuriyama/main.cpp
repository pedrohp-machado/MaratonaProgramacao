#include <bits/stdc++.h>
using namespace std; 

int main(){

    int n;
    cin >> n;

    long long int stone[n];
    for (int i = 0; i < n; i++) cin >> stone[i];

    long long int ordStone[n];
    copy(stone, stone + n, ordStone);
    sort(ordStone, ordStone + n);

    for (int i = 1; i < n; i++){
        stone[i] += stone[i - 1];
        ordStone[i] += ordStone[i - 1];
    }

    int test;
    cin >> test;
    
    while(test--){
        int type, l, r;
        cin >> type >> l >> r;

        l--;
        r--;

        if(type == 1){
            if(!l) cout << stone[r] << endl;
            else cout << stone[r] - stone[l - 1] << endl;
        }else{
            if(!l) cout << ordStone[r] << endl;
            else cout << ordStone[r] - ordStone[l - 1] << endl;
        }

    }

    return 0;
}