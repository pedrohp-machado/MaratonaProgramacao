#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string path;
        cin >> path;

        int coins = 0;

        if (path[0] != '*'){
            for(int i = 0; i < n - 1; i++){
                if (path[i + 1] == '@') coins++;
                else {
                    if (path[i + 1] == '.') continue;
                    else if (path[i + 2] == '@'){
                        coins++;
                        i++;
                    } else if (path[i + 2] == '.') i++;
                    else break;
                }
            }
        }
        cout << coins << endl;
    }

    return 0;
}