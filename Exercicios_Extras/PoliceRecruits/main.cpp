#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int freeOfficers = 0, crime = 0, event;

    while(n--){
        cin >> event;

        //'event' < 0, logo um crime ocorreu
        if (event < 0){
            crime++;
            if (freeOfficers > 0){
                //Se eu tenho pelo menos um policial livre, ele resolverá o crime e ficará ocupado
                crime--;
                freeOfficers--;
            }
        }
        else {
            //Caso contrário 'event' representa o número de funcionarios contratados
            freeOfficers += event;
        }
    }

    cout << crime << endl;

    return 0;
}