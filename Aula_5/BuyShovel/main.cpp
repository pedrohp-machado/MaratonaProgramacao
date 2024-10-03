#include <bits/stdc++.h>
using namespace std;

int main(){

    int k, r;
    cin >> k >> r;

    int shovel = 1, price = -1;

    if (k == r || k % 10 == 0){
        cout << 1 << endl;
        return 0;
    }

    while(price % 10 != r && price % 10 != 0){
        price = shovel * k;
        shovel++;
    }

    cout << shovel - 1 << endl;

    return 0;
}