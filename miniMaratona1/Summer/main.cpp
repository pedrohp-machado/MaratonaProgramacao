#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, f;
    cin >> n >> f;

    long long int total = 0;

    vector<int> aumento;

    for(int i = 0; i < n; i++){
        int k, l;
        cin >> k >> l;
        int sell = min(l, k);

        total += sell;

        int sellOut = min(l, 2 * k);
        int c = sellOut - sell;
        aumento.push_back(c);
    }

    sort(aumento.begin(), aumento.end(), greater<int>());
    for (int i = 0; i < f; i++) total += aumento[i];
    
    cout << total << endl;
}