/*
  author: Tien M. Pham
  created: 20.04.2024
*/
#include <bits/stdc++.h>

using namespace std;

void solution() {
  int32_t n;
  cin >> n;
  vector<int32_t> freq(10, 0);
  int32_t val;
  for (int i = 0; i < n; i++) {
    cin >> val;
    freq[val % 10] += 1;
  }
  
  bool is_3sum = false;
  int fi, se, th; 
  for (int i = 0; i < 10; i++) {
    if (freq[i] != 0 && !is_3sum) {
      fi = i;
      for (int j = i; j < 10; j++) {
        if (freq[j] != 0 && !is_3sum) {
          if (i == j && freq[j] - 2 < 0)
            continue;
          se = j;
          for (int k = j; k < 10; k++) {
            if (freq[k] != 0 && !is_3sum) {
              if (i == k && j == k && freq[k] - 3 < 0)
                continue;
              else if (j == k && freq[k] - 2 < 0)
                continue;
              th = k;
              if ((fi + se + th) % 10 == 3) {
                is_3sum = true;
                break;
              }
            }
          }
        } 
      }
    }
  }
  
  if (is_3sum)
    cout << "YES\n";
  else
    cout << "NO\n";  
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int32_t T;
  cin >> T;
  cin.ignore();
  while (T--) {
    solution();
  }

  return 0;
}
