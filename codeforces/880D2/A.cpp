#include <bits/stdc++.h>

using namespace std;

void solution() {
    int32_t n;
    cin >> n;
    vector<int32_t> freq(101, 0);
    for (int i = 0; i < n; i++) {
        int32_t l;
        cin >> l;
        freq[l] += 1;
    }

    bool flag = true;
    for (int32_t i = 1; i <= 100; i++) {
        if (freq[i] > freq[i-1]) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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
