#include <bits/stdc++.h>

using namespace std;


void dfs(int32_t u, vector<int32_t> &drawn,  vector<int32_t> &drawnOrder, vector<vector<pair<int32_t, int32_t>>> &graph) {
    if (graph[u].size() == 0) {
        return;
    }

    for (pair<int32_t, int32_t> v: graph[u]) {
        if (drawn[v.first] == 0) {
            drawn[v.first] = v.second >= drawnOrder[u] ? drawn[u] : drawn[u] + 1;
            drawnOrder[v.first] = v.second;
            dfs(v.first, drawn, drawnOrder, graph);
        }
    }
}

void solution() {
    int32_t n;
    cin >> n;
    int32_t u, v;
    vector <vector<pair<int32_t, int32_t>>> graph(n+1);
    for (int32_t i = 1; i < n; i++) {
        cin >> u >> v;
        graph[u].push_back({v, i});
        graph[v].push_back({u, i});
    }
    
    
    vector <int32_t> drawn(n + 1, 0);
    vector <int32_t> drawnOrder(n + 1, 0);
    drawn[1] = 1;
    dfs(1, drawn, drawnOrder, graph);

    int32_t noStep1 = 0;
    for (int32_t i = 1; i <= n; i++) {
        noStep1 = max(noStep1, drawn[i]);
    }

    cout << noStep1 << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t T;
    cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
