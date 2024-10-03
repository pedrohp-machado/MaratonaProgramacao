#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int vet[n], energy = 0, dollar = 0;
    for (int i = 0; i < n; i++) cin >> vet[i];

    energy -= vet[0];
    
    if (n != 1){
        for (int i = 0; i < n; i++){
            while (energy < 0){
                dollar++;
                energy++;
            }  
            energy += vet[i] - vet[i + 1]; 
        }
    } else{
        dollar = vet[0];
    }

    cout << dollar << endl;
    return 0;
}