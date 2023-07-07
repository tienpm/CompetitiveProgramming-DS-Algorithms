#include <bits/stdc++.h>

using namespace std;

int32_t dfs(int32_t u, int32_t parent, vector<vector<int32_t>>& edge, vector<int64_t>& numChild) {   
    if (edge[u].size() == 1 and u > 1) {
        numChild[u] += 1;
        return numChild[u];
    }

    for (auto &v : edge[u]) {
        if (v != parent) {
            numChild[u] += dfs(v, u, edge, numChild);
        }
    }

    return numChild[u];
}

void solution() {
    int32_t n;
    cin >> n;
    vector<vector<int32_t>> edge(n+1, vector<int32_t> ());
    for (int32_t i = 0; i < n-1; i++) {
        int32_t u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    vector<int64_t> numChild(n+1, 0);
    dfs(1, -1, edge, numChild);
    int32_t q;
    cin >> q;
    while (q--) {
        int32_t x, y;
        cin >> x >> y;
        cout << numChild[x] * numChild[y] << "\n";
    }
 
}

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    int32_t T;
    cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
