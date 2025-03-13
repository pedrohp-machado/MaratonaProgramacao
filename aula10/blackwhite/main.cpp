#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; 
    cin >> t;

    while (t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int black = 0, op = INT_MAX, white = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == 'B') black++;
            else white++;

            if ((i + 1) % k == 0){
                op = min(op, white);
                black = 0;
                white = 0;
            }
        }

        cout << op << endl;

    }

    return 0;
}