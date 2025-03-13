#include <bits/stdc++.h>
using namespace std;

int main(){

    int level;
    cin >> level;
    int a = 0, b = 1;

    while(level--){
        int aux = b;
        b += a;
        a = aux;
    }

    cout << b << endl;

    return 0;
}