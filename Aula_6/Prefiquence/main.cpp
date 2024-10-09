#include <bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin >> test;

    while(test--){
        
        int k = 0, auxA = 0, auxB = 0;

        int lenA, lenB;
        cin >> lenA >> lenB;

        string a, b;
        cin >> a >> b;

        while (auxA < lenA && auxB < lenB){
            if (a[auxA] == b[auxB]){
                auxA++;
                auxB++;
                k++;
            } else auxB++;
            
        }
        cout << k << endl;
    }

    return 0;
}