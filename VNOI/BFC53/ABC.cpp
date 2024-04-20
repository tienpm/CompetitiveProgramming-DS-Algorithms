#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  int num_comb = 0;
  for (int a = 1; a <= sqrt(n); a++) {
    num_comb += n/a;
  }

  cout << num_comb << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
