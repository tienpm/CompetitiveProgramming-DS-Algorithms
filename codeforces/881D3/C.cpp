#include <bits/stdc++.h>

using namespace std;

void solution() {
    int64_t n;
    cin >> n;
    int64_t sumPath  = 0;
    while (n != 0) {
        sumPath += n;
        n /= 2;
    }

    cout << sumPath << "\n"; 
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
