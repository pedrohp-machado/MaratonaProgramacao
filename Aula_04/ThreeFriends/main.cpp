#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int medio = 0, dist = 0, x1 = 0, x2 = 0, x3 = 0;

    cin >> x1;
    cin >> x2;
    cin >> x3;

    if (x1 > x2 && x1 < x3 || x1 > x3 && x1 < x2)
        medio = x1;
    else if (x2 > x1 && x2 < x3 || x2 > x3 && x2 < x1)
        medio = x2;
    else 
        medio = x3;

    dist += abs(medio - x1);
    dist += abs(medio - x2);
    dist += abs(medio - x3);
    
    cout << "A distância mínima dos três amigos é de: " << dist << endl;
    return 0;
}