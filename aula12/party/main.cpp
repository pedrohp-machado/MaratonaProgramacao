#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int minGroups(vector<int>& managers, int n) {
    vector<vector<int>> tree(n + 1);
    vector<int> depth(n + 1, 0);
    queue<int> q;
    
    for (int i = 1; i <= n; ++i) {
        if (managers[i] == -1) {
            q.push(i);
        } else {
            tree[managers[i]].push_back(i);
        }
    }
    
    int maxDepth = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : tree[u]) {
            depth[v] = depth[u] + 1;
            maxDepth = max(maxDepth, depth[v]);
            q.push(v);
        }
    }
    
    return maxDepth + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> managers(n + 1);
    
    for (int i = 1; i <= n; ++i) {
        cin >> managers[i];
    }
    
    cout << minGroups(managers, n) << endl;
    return 0;
}
