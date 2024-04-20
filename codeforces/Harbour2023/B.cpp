#include <bits/stdc++.h>

using namespace std;

void solution() {
    int32_t n, k;
    cin >> n >> k;
    cin.ignore();
    string s, ans = "";
    getline(cin, s);
    if (k % 2 == 0) {
        ans = s;
        sort(ans.begin(), ans.end());
    }
    else {
        vector<char> evens, odds;
        for (int i = 0; i < int32_t(s.length()); i++) {
            if (i % 2 == 0) {
                evens.push_back(s[i]);
            }
            else {
                odds.push_back(s[i]);
            }
        }
        sort(evens.begin(), evens.end());
        sort(odds.begin(), odds.end());
        int32_t eid = 0, oid = 0;
        for (int32_t i = 0; i < int32_t(s.length()); i++) {
            if (i % 2 == 0) {
                ans += evens[eid];
                eid += 1;
            }
            else {
                ans += odds[oid];
                oid += 1;
            }
        }
    }

    cout << ans << "\n";
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
