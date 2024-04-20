#include <bits/stdc++.h>

using namespace std;

void solution() {
    int32_t n, m;
    cin >> n >> m;
    vector<vector<int64_t>> a(n, vector<int64_t>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    

    int64_t min_ope = 0;
    for (int i = 0; i < (int)(n / 2); i++) {
        for (int j = 0; j < (int)(m / 2); j++) {
            int64_t mx = abs(a[i][j] - a[i][m-j-1]) + abs(a[i][j] - a[n-i-1][j]) + abs(a[i][j] - a[n-i-1][m-j-1]);
            mx = min(mx, abs(a[i][m-j-1] - a[i][j]) + abs(a[i][m-j-1] - a[n-i-1][j]) + abs(a[i][m-j-1] - a[n-i-1][m-j-1])); 
            mx = min(mx, abs(a[n-i-1][j] - a[i][j]) + abs(a[n-i-1][j] - a[i][m-j-1]) + abs(a[n-i-1][j] - a[n-i-1][m-j-1])); 
            mx = min(mx, abs(a[n-i-1][m-j-1] - a[i][j]) + abs(a[n-i-1][m-j-1] - a[i][m-j-1]) + abs(a[n-i-1][m-j-1] - a[n-i-1][j]));  
            // int64_t s = (a[i][j] + a[i][m-j] + a[n-i][j] + a[n-1][m-j]);
            min_ope += mx;
            // cout << "dbg " << i << " " << j << " " << min_ope << "\n";
        }
    }
    // cout << "debug: " << min_ope << "\n";  

    // Calculate rows left
    if (n & 1) {
        for (int j = 0; j < m / 2; j++) {
            int64_t mid = (a[n/2][j] + a[n/2][m-j-1]) / 2;
            min_ope += abs(mid - a[n/2][j]) +  abs(mid - a[n/2][m-j-1]);
        }
    }

    // Calculate columns left
    if (m & 1) {
        for (int i = 0; i < n / 2; i++) {
            int64_t mid = (a[i][m/2] + a[n-i-1][m/2]) / 2;
            min_ope += abs(mid - a[i][m/2]) + abs(mid - a[n-i-1][m/2]);
        }
    }

    cout << min_ope << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int32_t T;
    cin >> T;
    while (T--) {
        solution();    
    }

    return 0;
}
