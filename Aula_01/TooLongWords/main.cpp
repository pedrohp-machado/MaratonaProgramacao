#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    string word, abv;

    cout << "Quantas palavras serão lidas? " << endl;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> word;

        if (word.length() > 10){
            abv.operator+=(word.front());
            abv.operator+=(to_string(word.length() - 2));
            abv.operator+=(word.back());

            cout << "A palavra abreviada é: " << abv << endl;

            abv.erase();
        } else{
            cout << "A palavra normal é " << word << endl;
        }
    }

    return 0;
}