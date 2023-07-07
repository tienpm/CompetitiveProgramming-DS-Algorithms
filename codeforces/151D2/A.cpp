#include <bits/stdc++.h>

using namespace std;

void solution() {
    int32_t n, k, x;
    cin >> n >> k >> x;
    vector <int32_t> values;
    if (x != 1) {
        cout << "YES\n";
        cout << n << "\n";
        for (int32_t i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << "\n";
    }
    else {
        if (k == 1 or (k == 2 and n % 2 != 0)) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << n / 2 << "\n";
            for (int i = 0; i < n / 2 - 1; i++) {
                cout << 2 << " ";
            }

            if (n % 2 == 0) {
                cout << 2 << "\n";
            }
            else {
                cout << 3 << "\n";
            }  
        }
    }
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
