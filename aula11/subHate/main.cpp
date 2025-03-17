#include <bits/stdc++.h>
using namespace std;

int min_operations(string &s) {
    int count_transitions = 0;
    for (size_t i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1]) {
            count_transitions++;
        }
    }
    return (count_transitions + 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        cout << min_operations(s) << "\n";
    }
    
    return 0;
}