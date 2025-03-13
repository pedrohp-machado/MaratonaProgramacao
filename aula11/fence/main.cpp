#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    int heights[n];
    for (int i = 0; i < n; i++) cin >> heights[i];

    int j = -1, sumHeights = 0, r = INT_MAX;

    for (int i = 0; i < n; i++){
        for (int j = i; j < i + k - 1; j++) sumHeights += heights[j];
        
        if(sumHeights < r){
            r = sumHeights;
            j = i;
        }
        sumHeights = 0;
    }

    cout << j << endl;

    return 0;
}