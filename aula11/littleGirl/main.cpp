#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> freq(n + 1, 0);
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        freq[l - 1]++; 
        freq[r]--;    
    }
    
    for (int i = 1; i < n; i++) {
        freq[i] += freq[i - 1];
    }
    
    freq.pop_back(); 
    
    sort(freq.begin(), freq.end(), greater<int>());
    sort(a.begin(), a.end(), greater<int>());
    
    long long maxSum = 0;
    for (int i = 0; i < n; i++) {
        maxSum += 1LL * a[i] * freq[i];
    }
    
    cout << maxSum << "\n";

    return 0;
}