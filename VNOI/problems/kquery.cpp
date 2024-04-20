/*
 *  author: Tien M. Pham
 *  create date: 08.12.2022
 * */

#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, q;
  cin >> n;
  vector<int> a(n);
  
  for(int id = 0; id < n; id++)
    cin >> a[id];

  cin >> q;
  int i, j, k;
  while (q > 0) {
    cin >> i >> j >> k;
    cout << i << " " << j << " " << k << "\n";
    --q;
  }

  return 0;
}

