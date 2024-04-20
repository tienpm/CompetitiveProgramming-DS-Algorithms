#include <bits/stdc++.h>

using namespace std;

void solution() {
   int32_t x, y, n;
   cin >> x >> y >> n;
   vector <int32_t> a(n, -1);
   a[n-1] = y;
   int32_t d = 1;
   for (int32_t i = n - 2; i >= 0; i--) {
       a[i] = a[i+1] - d;
       d += 1;
   }

   a[0] = x;
   if (a[0] < a[1] and a[1] - a[0] > a[2] - a[1]) {
       for (int32_t &num : a) {
           cout << num << " ";
       }
        cout << "\n";
   }
   else {
    cout << -1 << "\n";
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
