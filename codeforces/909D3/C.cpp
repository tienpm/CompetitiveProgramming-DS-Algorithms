#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int32_t n;
    cin >> n;
    vector<int32_t> a(n);
    int32_t ans = (int32_t)-1e9;
    for (int32_t i = 0; i < n; i++) {
        cin >> a[i];
        ans = max(ans, a[i]);
    }
 
    int32_t s = a[0];
    for (int32_t i = 1; i < n; i++) {
        ans = max(ans, a[i]);
        if ((a[i] % 2 == 0 and a[i-1] % 2 == 0) or (a[i] % 2 != 0 and a[i-1] % 2 != 0))  {
            s = a[i];
        }
        else {
            if (s < 0 || s + a[i] < 0) {
                s = a[i];
            }
            else {
                s = s + a[i];
            }
            ans = max(ans, s);
        }
        // cout << "debug " << s << "\n";
    }
 
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
