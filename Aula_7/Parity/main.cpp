#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test; 

    while(test--){
        int n, operations = 0;

        vector <long long int> pares, impares;
        cin >> n;
        while(n--){
            int number;
            cin >> number;
            if (number % 2) impares.push_back(number);
            else pares.push_back(number);
        }

        if (impares.empty() || pares.empty()){
            cout << 0 << endl;
            continue;
        } 

        sort(pares.begin(), pares.end());
        sort(impares.begin(), impares.end());

        long long int maiorImpar = impares.back();

        for(int i = 0; i < pares.size(); i++){
            if (pares[i] > maiorImpar){
                operations = pares.size() + 1;
                i = pares.size();
            } else{
                operations++;
                maiorImpar += pares[i];
            }
        }

        cout << operations << endl;
    }
}