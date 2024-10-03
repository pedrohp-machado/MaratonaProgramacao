#include <bits/stdc++.h>
using namespace std;

int main(){
    int upper = 0, lower = 0;
    string ALFA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string alfa = "abcdefghijklmnopqrstuvwxyz";
    string word;
    cin >> word; 
    
    for(char c: word){
        if (ALFA.find(c) != string::npos) upper++;
        if (alfa.find(c, 0) != string::npos) lower++;
    } 

    if (upper > lower) 
        for (auto & c: word) c = toupper(c);
    else
        for (auto & c: word) c = tolower(c);;
    
    cout << word << endl;

    return 0;
}