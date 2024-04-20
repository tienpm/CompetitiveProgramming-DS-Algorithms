/*
  author: Tien M. Pham
  created: 20.04.2024
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;

  if (a > b)
    swap(a, b);
  if (a > c) {
    swap(a, c);
    swap(b, c);
  }
  else if (a < c && c < b)
    swap(b, c);

  int max_ribbon = 0;
  int n_ribbon = 0; 
  for (int i = (int)n / a; i >= 0; i--) {
    int m = n - i * a;
    n_ribbon = i;
    if (m == 0) {
      max_ribbon = max(max_ribbon, n_ribbon);
    }
    else if (m > 0 && m >= b) {
      bool found = false;
      for (int j = (int)m / b; j >= 0; j--) {
        int l = m - j * b;
        n_ribbon += j;
        if (l == 0) {
          max_ribbon = max(max_ribbon, n_ribbon);
          found = true;
        }
        else if (l > 0 && l >= c) {
          for (int k = (int)l / c; k >= 0; k--) {
            if (l - k * c == 0) {
              max_ribbon = max(max_ribbon, n_ribbon + k);
              found = true;
              break;
            }
          }
        }
        
        if (found) break;

        n_ribbon -= j;
      }
    }
  }

  cout << max_ribbon << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
