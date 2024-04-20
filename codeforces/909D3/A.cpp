#include <bits/stdc++.h>

using namespace std;

void solve() {
   int32_t n;
   cin >> n;
   
    if ((n + 1) % 3 == 0 || (n-1) % 3 == 0)
        cout << "First\n";
    else 
        cout << "Second\n"; 
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
