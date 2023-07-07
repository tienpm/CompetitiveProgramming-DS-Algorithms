#include <bits/stdc++.h>

using namespace std;

void solution() {
    int32_t n, k;
    cin >> n >> k;
    int32_t ans = ceil((n / 2) / float(k));
    
    if  (k == 1) {
        cout << n << "\n";
    }
    else if (n % 2 == 0) {
        cout << 2 * ans << "\n"; 
    }
    else {
        if (k >= n / 2 + 1) {
            cout << ceil(float(n) / k) << "\n";
        }
        else {  
            cout << 2 * ans << "\n"; 
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
