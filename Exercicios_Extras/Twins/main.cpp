#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, input, sumBro = 0, sumMe = 0;
    cin >> n;

    vector <int> bro;
    vector <int> me;

    for (int i = 0; i < n; i++){
        cin >> input;
        bro.push_back(input);
    }
    sort(bro.begin(), bro.end());
    sumBro = accumulate(bro.begin(), bro.end(), 0);

    while(sumMe <= sumBro){
        
        sumMe += bro.back();
        sumBro -= bro.back();

        me.push_back(bro.back());
        bro.pop_back();
    }

    cout << me.size() << endl;

    return 0;
}