#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, entrada, l1 = 0, l2 = 0, l3 = 0;
    cin >> n;

    vector <int> segments;
    for (int i = 0; i < n; i++){
        cin >> entrada;
        segments.push_back(entrada);
    }
    sort(segments.begin(), segments.end());

    while (n--){
        l1 = segments[n];
        l2 = segments[n - 1];
        l3 = segments[n - 2];

        if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}