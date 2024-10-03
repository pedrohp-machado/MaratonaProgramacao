#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, piece = 0; 
    cin >> n;

    vector <int> sushi(n);
    vector <int> sequence;

    for (int i = 0; i < n; i++) cin >> sushi[i];

    for (int i = 0; i < n; i++){
        if (sushi[i] != sushi[i - 1] && i > 0){
            sequence.push_back(piece);
            piece = 0;
        }

        piece++;
    }

    if (piece > 0) sequence.push_back(piece);

    int output = 0;
    for (int i = 0; i < sequence.size() - 1; i++){
        output = max(output, min(sequence[i], sequence[i + 1]));
    }

    cout << output * 2 << endl;

    return 0;
}