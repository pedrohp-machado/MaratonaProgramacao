#include <bits/stdc++.h>
using namespace std;

int main(){

    int lmag = 0, rmag = 0, n = 0, group = 1;

    //Number of magnets
    cin >> n;
    if (n == 1){
        cout << group << endl;
        return 0;
    } 
    cin >> lmag;
    cin >> rmag;

    while (n--){
        if (lmag != rmag) group++;

        lmag = rmag;
        cin >> rmag;
    }

    cout << group << endl;
    return 0;
}