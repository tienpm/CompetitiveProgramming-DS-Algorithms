/*
    author: Tien M. Pham
    created: 01.11.2023
*/
#include <bits/stdc++.h>

using namespace std;

struct SQRT_decomp{
    int32_t block_size;
    vector<int64_t> sum_blocks;

    SQRT_decomp(){};
    SQRT_decomp(vector<int32_t> &a) {
        int32_t n = (int)a.size();
        block_size = (int32_t)sqrt(n + 0.0) + 1;
        sum_blocks.assign(block_size, 0);
        for (int32_t i = 0; i < n; i++) {
            sum_blocks[i / block_size] += a[i];
        }
    }

    void update(vector<int32_t> &a, int32_t id, int32_t val) {
        sum_blocks[id / block_size] -= a[id];
        a[id] = val;
        sum_blocks[id / block_size] += val;
    }

    int64_t query(vector<int32_t> &a, int32_t l, int32_t r) {
        int64_t s = 0;
        int32_t i = l;
        while (i <= r) {
            if (i % block_size == 0 and i + block_size <=r) {
                s += sum_blocks[i / block_size];
                i += block_size;
            }
            else {
                s += a[i];
                i += 1;
            }
        }

        return s;
    }
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t n, q;
    cin >> n >> q;
    vector<int32_t> a(n);
    for (int32_t i = 0; i < n; i++) cin >> a[i];

    // Initialize square root decomposition
    SQRT_decomp sqrtDS(a);
    
    int32_t type, fi, se;
    while (q--) {
        cin >> type >> fi >> se;
        if (type == 1) {
            sqrtDS.update(a, fi - 1, se);
        }
        else {
            cout << sqrtDS.query(a, fi - 1, se - 1) << "\n";
        }
    }

    return 0;
}
