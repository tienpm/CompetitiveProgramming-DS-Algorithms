/*
    author: Tien M. Pham
    created: 08.11.2023
    description: 
    status: AC  
*/
#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t m, n;
    vector<vector<int32_t>> a;
    cin >> m >> n;
    a.assign(m, vector<int32_t>(n, 0));
    for (int32_t i = 0; i < m; i++) 
        for (int32_t j = 0; j < n; j++)
            cin >> a[i][j];

    vector<vector<int32_t>> dp(m, vector<int32_t>(n, INT_MIN));
    for (int32_t j = 0; j < n; j++) {
        for (int32_t i = 0; i < m; i++) {
            if (j - 1 < 0) 
                dp[i][j] = a[i][j];
            else {
                int32_t up_left = i - 1 >= 0 ? dp[i-1][j-1] : INT_MIN;
                int32_t bot_left = i + 1 < m ? dp[i+1][j-1] : INT_MIN; 
                dp[i][j] = max(max(up_left, dp[i][j-1]), bot_left) + a[i][j];
            }
        }
    }

    int32_t ans = dp[0][n - 1];
    for (int32_t i = 1; i < m; i++) 
        ans = max(ans, dp[i][n - 1]);

    cout << ans << "\n";

    return 0;
}
