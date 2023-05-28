#include <bits/stdc++.h>

using namespace std;

void solution() {
	int n, k;
	cin >> n >> k;
	if (abs(n) < k) {
		cout << 1 << "\n" << n << "\n";
	}
	else {
		if (n % k == 0) {\
			cout << 2 << "\n";
			if (n > 0) {
				cout << n - (k + 1) << " " << k + 1 << "\n";
			}
			else
				cout << -(abs(n) - (k + 1)) << " " << -(k + 1) << "\n";
		}
		else {
		       cout << 1 << "\n" << n << "\n";
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		solution();		
	}

	return 0;
}
