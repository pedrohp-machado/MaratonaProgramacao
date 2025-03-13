#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int l;
        cin >> l;

        string str;
        cin >> str;

        int i = 1, output = l;
        while(str[i - 1] != str[l - i] && output > 0){
            output -= 2;
            i++;
        }
        if (output < 0) cout << 0 << endl;
        else cout << output << endl;
    }

    return 0;
}