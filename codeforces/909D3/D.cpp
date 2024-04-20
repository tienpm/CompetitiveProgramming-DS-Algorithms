#include <bits/stdc++.h>

using namespace std;

void solve() {
    int32_t n;
    cin >> n;
    
    vector<int32_t> a(n);
    map<int32_t, int64_t> freq;
    for (int32_t i = 0; i < n; i++) {
        cin >> a[i];
        if (freq.find(a[i]) == freq.end()) 
            freq[a[i]] = 1;
        else
            freq[a[i]] += 1;
    }

    int64_t ans = 0, n1 = 0, n2 = 0;
    for (map<int32_t, int64_t>::iterator it=freq.begin(); it != freq.end(); it++) {
        if (it->second > 1)
            ans += it->second * (it->second - 1) / 2;

        if (it->first == 1)
            n1 = it->second;
        else if (it->first == 2)
            n2 = it->second;
    }

    ans += n1 * n2;

    cout << ans << "\n";
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
