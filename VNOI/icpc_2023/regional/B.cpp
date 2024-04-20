#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    bool a[n][m], cond1 = true, cond2 = true, cond3 = true;
    
    for (int i = 0; i < n; i++) {
        bool is_not_solved_all = false, is_solved_1p = false;
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j]) is_solved_1p = true;
            else is_not_solved_all = true;
        }
        cond2 &= is_not_solved_all;
        cond3 &= is_solved_1p;
    }

    for (int j = 0; j < m; j++) {
        bool at_least_1_solved = false;
        for (int i = 0; i < n; i++) {
            if (a[i][j]) at_least_1_solved = true;
        }
        cond1 &= at_least_1_solved; 
    }

    if (cond1 & cond2 & cond3)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
