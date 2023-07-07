#include <bits/stdc++.h>

using namespace std;

void solution() {
    int32_t n;
    cin >> n;
    vector<int32_t> a;
    for(int32_t i = 0; i < n; i++) {
        int32_t x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int32_t maxColoring = 0;
    for (int32_t i = 0; i < n / 2; i++) {
        maxColoring += (a[n-1-i] - a[i]);
    }
    
    cout << maxColoring << "\n"; 
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
