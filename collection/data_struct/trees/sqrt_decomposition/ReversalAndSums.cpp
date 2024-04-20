/*
    author: Tien M. Pham
    created: 17.11.2023
*/
#include <bits/stdc++.h>

using namespace std;

struct sqrt_decomp {
    int32_t block_size;
    vector<int64_t> sum_blocks;

    sqrt_decomp(){};
    sqrt_decomp(vector<int64_t> &a) {
       int32_t n = (int32_t)a.size();
       block_size = (int32_t)sqrt(n + 0.0) + 1;
       sum_blocks.assign(block_size, 0);
       for (int32_t i = 0; i < n; i++) {
           sum_blocks[i / block_size] += a[i];
       }
    }

    void update(vector<int64_t> &a, int32_t l, int32_t r) {
        vector<int64_t> pre_a;
        pre_a.assign(a.begin(), a.end());
        for (int32_t i = l, j = r; i <= r && j >= l; i++, j--) {
           sum_blocks[i / block_size] -= a[i];
           a[i] = pre_a[j];
           sum_blocks[i / block_size] += a[i];
        }
    }

    int64_t query(vector<int64_t> &a, int32_t l, int32_t r) {
        int64_t s = 0;
        int32_t i = l;
        while (i <= r) {
            if (i % block_size == 0 and i + block_size <= r) {
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
    int32_t n, m;
    cin >> n >> m;
    vector<int64_t> a(n);
    for (int32_t i = 0; i < n; i++)
        cin >> a[i];

    //Initialize square root decomposition
    sqrt_decomp sqrtDS(a);

    int32_t t, l, r;
    for (int32_t i = 0; i < m; i++) {
        cin >> t >> l >> r;
        if (t == 1) {
            sqrtDS.update(a, l-1, r-1);
        }
        else {
            cout << sqrtDS.query(a, l-1, r-1) << "\n";
        }
    }

    return 0;
}
