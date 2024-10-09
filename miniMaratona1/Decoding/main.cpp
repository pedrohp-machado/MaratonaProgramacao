#include <bits/stdc++.h>
using namespace std;

int main() {

    int len, i = 0;
    cin >> len;

    string input, output;
    cin >> input;


    while (input.length() != 0){
        if (len % 2) output.push_back(input[i]);
        else output.insert(output.begin(), input[i]);

        input.erase(0, 1);
        len = input.length();
    }
    
    cout << output << endl;

    return 0;
}