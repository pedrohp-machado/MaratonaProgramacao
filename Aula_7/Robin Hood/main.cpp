#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while (test--)
    {
        int people, k, a, help = 0, money = 0;
        
        cin >> people >> k;

        while(people--){
            cin >> a; 
            if (a >= k) money += a;
            else if (a == 0) {
                if (money >= 1){
                    help++;
                    money--;
                }
            } 
        }

        cout << help << endl;

    }
    
}