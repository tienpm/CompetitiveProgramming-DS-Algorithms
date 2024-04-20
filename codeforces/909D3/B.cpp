#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int32_t n;
    cin >> n;
    vector<int64_t> a(n);
    for (int32_t i = 0; i < n; i++) 
        cin >> a[i];
        
    int64_t mae = 0;
    for (int32_t k = 1; k <= n; k++) {
        if (n % k == 0) {
            int64_t minn = (int64_t)1e18, maxx = 0, s = 0;
            for (int32_t i = 0; i < n; i++) {
                s += a[i];
                if ((i+1) % k == 0) {
                    maxx = max(maxx, s);
                    minn = min(minn, s);
                    s = 0;
                }
            }
            //cout << maxx << " " << minn << "\n";
 
            mae = max(mae, maxx - minn);
        }
    }
 
    cout << mae << "\n";
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
