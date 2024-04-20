#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t n;
    cin >> n;
    vector<pair<int32_t, int32_t>> p(n, vector<pair<int32_t, int32_t>>());
    int32_t l, r;
    for (int32_t i = 0; i < n; i++) {
        cin >> l >> r;
        p.push_back({l, r});
    }

    return 0;
}
