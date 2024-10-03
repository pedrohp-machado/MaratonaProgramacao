#include <bits/stdc++.h>
using namespace std;

int main(){

    //'n' Number of matchboxes Burglar can hold
    //'m' Number of containers
    int n, m;

    cin >> n >> m;

    //'a' Number of matchboxes in one container
    //'b' Number of matches in one matchbox
    int a, b, matches = 0;

    vector <pair <int, int> > vet;

    for (int i = 0; i < m; i++){
        cin >> a >> b;
        vet.push_back(make_pair(b, a));
    }
    sort(vet.rbegin(), vet.rend());
    
   for (int i = 0; i < m; i++){
        n -= vet[i].second;
        if (n > 0) matches += vet[i].first * vet[i].second;
        else{
            matches += (n + vet[i].second) * vet[i].first;
            break;
        }  
    }

    cout << matches << endl;
    return 0;
}