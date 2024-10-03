#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, record = 0;
    scanf("%d", &n);
    
    string winners;
    cin >> winners;

    for(char c: winners){
        if (toupper(c) == 'A') record++;
        else record--;
    }

    if (record > 0) cout << "Anton" << endl;
    else if (record < 0) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}