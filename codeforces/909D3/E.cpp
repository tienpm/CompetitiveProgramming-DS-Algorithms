#include <bits/stdc++.h>

using namespace std;

void solve() {
    int32_t n;
    cin >> n;
    vector<int32_t> a(n);

    for (auto &x : a)
        cin >> x;

    int32_t min_pos = -1, min_val = (int32_t)1e9+1;
    for (int32_t i = 0; i < n; i++) {
        if (min_val > a[i]) {
            min_val = a[i];
            min_pos = i;
        }
    }

    bool inc = true;
    for (int32_t i = min_pos + 1; i < n; i++) {
        if (a[i] < a[i-1]) {
            inc = false;
            break;
        }
    }

    if (!inc) {
        cout << -1 << "\n";
    }
    else {
        if (min_pos == 0) 
            cout << 0 << "\n";
        else {
            cout << min_pos << "\n";
        }
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
