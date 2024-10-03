#include <bits/stdc++.h>
using namespace std;
int spellCount = 0, sum = 0;
string s;

int sumDigits(int soma){
    if (soma < 10){
        return sum;
    }
    sum = 0;
    string aux = to_string(soma);
    for (int i = 0; i < aux.length(); i++){
        sum += aux[i] - '0';
    }
    spellCount++;
    return sumDigits(sum);
}

int main() {

    cin >> s;

    if (s.length() >= 2){
        for (int i = 0; i < s.length(); i++){
            sum += s[i] - '0';
        }
        spellCount++;
        sumDigits(sum);
    }

    cout << spellCount << endl;

    return 0;   
}