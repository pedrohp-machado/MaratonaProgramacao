#include <bits/stdc++.h>
using namespace std;

int main(){

    int test, n, m;
    cin >> test;

    while (test--){
        cin >> n;
        cin >> m;

        if (n >= m){
            if ((n - m) % 2 == 0) cout << "YES" << endl;
            else if(n == m) cout << "YES" << endl;
            else cout << "NO" << endl;
        } 
        else cout << "NO" << endl;
    }

    return 0;
}