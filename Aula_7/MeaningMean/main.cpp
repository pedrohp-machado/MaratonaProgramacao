#include <bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        long int x;
        
        vector<long int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        sort(nums.begin(), nums.end());

        x = nums[0];

        for (int i = 1; i < n; i++){
            x = (x + nums[i]) / 2;
        }

        cout << x << endl;

    }

    return 0;
}