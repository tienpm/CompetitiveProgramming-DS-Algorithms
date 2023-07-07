#include <bits/stdc++.h>

using namespace std;

void solution() {
    int64_t n, k, g;
    cin >> n >> k >> g;
    int64_t savedCoin = min((g - 1) / 2 * n, k * g);
    int64_t mustPaid = k * g - savedCoin;
    if (mustPaid > 0) {
        savedCoin -= (g - 1) / 2;
        int64_t maxPaid = mustPaid + (g - 1) / 2;
        int64_t r = maxPaid % g;
        if (r >= (g + 1) / 2) {
            savedCoin += maxPaid - (maxPaid + (g - r));
        }
        else {
            savedCoin += maxPaid - (maxPaid - r);
        }
    }
    
    cout << savedCoin << "\n";
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
