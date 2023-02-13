#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int n, sum = 0, k = -1;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] == 2) {
				sum += a[i];
			} 
		}

		if (sum == 0) {
			cout << 1 << "\n";
		}
		else if (sum == 2) {
			cout << k << "\n";
		}
		else {
			int sum2 = 0;
			for (int i = 0; i < n; i++) {
				if (a[i] == 2) {
					sum2 += a[i];
					if (sum2 * 2 == sum) {
						k = i + 1;
						break;
					}
				}
			}
			cout << k << "\n";
		}
	}
	return 0;
}
