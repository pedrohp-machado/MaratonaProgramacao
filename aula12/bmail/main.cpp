#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> parent(n + 1); 

    for (int i = 2; i <= n; ++i) {
        cin >> parent[i];
    }

    vector<int> path; 
    int current = n;

    while (current != 1) {
        path.push_back(current);
        current = parent[current];
    }
    
    path.push_back(1); 

    for (int i = path.size() - 1; i >= 0; --i) {
        cout << path[i] << " ";
    }
    cout << endl;

    return 0;
}
