#include <bits/stdc++.h>

using namespace std;

void dfs(int32_t u, int32_t s, vector<int32_t> &root, vector<set<int32_t>> &adj, vector<pair<int32_t, int32_t>> &leafs) {
    if (adj[u].size() == 1 and *adj[u].begin() == root[u]) {
        leafs.push_back({u, s});
        return;
    }

    for (set<int32_t>::iterator it = adj[u].begin(); it != adj[u].end(); it++) {
        int32_t v = *it;
        if (v == root[u]) continue;
        root[v] = u;
        dfs(v, s+1, root, adj, leafs); 
    }
}

void solve() {
    int32_t n, q, d;
    cin >> n >> q;
    vector<set<int32_t>> adj;

    for (int32_t i = 1; i < n; i++) {
        adj[i].insert(i+1);
        adj[i+1].insert(i);
        cout << i << " " << i + 1 << "\n";
    }

    while (q--) {
        cin >> d;
        cout << "-1 -1 -1\n";
        /*
        vector<pair<int32_t, int32_t>> leafs;
        vector<int32_t> root(n+1, -1);
        dfs(1, 0, root, adj, leafs);
        bool found_d = false;
        for (pair<int32_t, int32_t> &leaf : leafs) {
            if (leaf.second == d) {
                found_d = true;
                break;
            }
        }
        
        if (found_d) continue;
        
        if (leafs.size() == 1) {
            int32_t s = n-1, u = leafs[0].first; 
            while (s != d and u != -1) {
                s -= 1;
                u = root[u];
            }
            if (root[u] == 2) {
            
            }
            else {
                adj[root[u]].erase(u);
                adj[u].erase(root[u])
                adj[2].insert(u);
            }
        }
        else {
            // leafs size = 2

        }
        */
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int32_t T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
