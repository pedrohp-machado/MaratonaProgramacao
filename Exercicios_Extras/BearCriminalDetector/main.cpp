#include <bits/stdc++.h>
using namespace std;

signed main() {

    int n, a;
    cin >> n >> a;
    a--;

    int vet[n], criminal = 0, crime = 0;

    for (int i = 0; i < n; i++) cin >> vet[i];

    if (vet[a]) crime++;

    for (int i = 1; i < n; i++) {
        int d = a - i, j = a + i;
        if (d >= 0){
            if (vet[d]) criminal++;
        } 
        if (j < n){
            if (vet[j]) criminal++;
        }

        if (criminal == 2) crime += 2;
        else if (criminal == 1)
            if (d < 0 || j > n - 1) crime++;

        criminal = 0;
    }

    cout << crime << endl;
}