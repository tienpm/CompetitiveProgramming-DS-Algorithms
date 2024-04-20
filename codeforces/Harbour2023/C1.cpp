#include <bits/stdc++.h>

using namespace std;

void solution() {
    int32_t x;
    cin >> x;
    vector<int32_t> div_chain;
    div_chain.push_back(x);
    while (x & (x-1)) {
        int32_t p = 0;
        while ((x & (1 << p)) == 0) 
            p += 1;
        x -= 1 << p;
        div_chain.push_back(x);
    }
    
    // x is power of 2
    while (x % 2 == 0) {
        x >>= 1;
        div_chain.push_back(x);
    }
    
    cout << div_chain.size() << "\n";
    for (int32_t &num : div_chain) {
        cout << num << " \n"[num == div_chain.back()];
    }
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
