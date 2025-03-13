#include <bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cin >> size;

    int small = 1000000;
    int out;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int jew;
            cin >> jew; 
            if (jew < small){
                small = jew;
                if(i == 0 && j == 0) out = 0;
                else if (i == 0 && j == size - 1) out = 1;
                else if (i == size - 1 && j == size - 1) out = 2;
                else if (i == size - 1 && j == 0) out = 3;
            } 
        }
    }

    cout << out << endl;


    return 0;
}