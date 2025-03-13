#include <bits/stdc++.h>
using namespace std;

int sumDigits(int x){
    int soma = 0;
    while(x > 0){
        soma += x % 10;
        x /= 10;
    }
    return soma;
}

int main(){

    int n, k;
    cin >> n >> k;

    priority_queue<int> vet;

    int val;
    for(int i = 0; i < n; i++){
        cin >> val;
        vet.push(val);
    }

    int pollen = 0;
    sort(vet, vet + n);
    while(k--){
        val = vet.top();
        vet.pop();
        pollen = sumDigits(val);
        
        val -= pollen; 
        vet.push(val);
    }

    cout << pollen << endl;

    return 0;
}