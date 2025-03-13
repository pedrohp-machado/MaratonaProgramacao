#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, number = 0;
        cin >> n;

        int min = n + 1, max = -1, indmin, indmax;

        for (int i = 0; i < n; i++){
            cin >> number;

            if (number < min){
                min = number;
                indmin = i;
            }
            
            if (number > max){
                max = number;
                indmax = i;
            }
        }

        int leftmost = std::min(indmin, indmax);
        int rightmost = std::max(indmin, indmax);

        int op1 = rightmost + 1;
        int op2 = n - leftmost;
        int op3 = (leftmost + 1) + (n - rightmost);

        int move = std::min({op1, op2, op3});

        cout << move << endl; 
    }

    return 0;
}