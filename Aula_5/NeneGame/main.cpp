#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){
        int k = 0, q = 0, n;
        cin >> k >> q;

        vector<int> a(k);
        for (int i = 0; i < k; i++) cin >> a[i];

        for(int i = 0; i < q; i++){
            cin >> n;
            int losers = 0, idx = 0;
            while (1){
                if (a[idx] <= n){ 
                    losers++;
                    idx++;
                    if (idx >= k){ 
                        idx = 0;
                        n -= losers;
                        losers = 0;
                    }
                } else{
                    n -= losers;
                    break;
                }
            }

            cout << n << " ";
        }
        cout << endl;
    }
    
    return 0;
}