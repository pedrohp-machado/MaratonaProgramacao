#include <iostream>
using namespace std;

int main(){

    int n, xPonto = 0, yPonto = 0, zPonto = 0;
    int x, y, z;
    cout << "Quantos vetores serão somados? " << endl;
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Digite os valores x, y, e z do vetor " << i << endl;
        cin >> x >> y >> z;

        xPonto += x;
        yPonto += y;
        zPonto += z;
    }

    if (xPonto == 0 && yPonto == 0 && zPonto == 0){
        cout << "O corpo está em equiíbrio" << endl;
    } else{
        cout << "O corpo não está em equilíbrio" << endl;
    }

    return 0;    
}