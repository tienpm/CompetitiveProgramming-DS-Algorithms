#include <bits/stdc++.h>

using namespace std;

const int a_ub = 3e5+1;

int main() {
	int T;
	cin >> T;
	vector <int> xorPrefix(a_ub, 0);
	for (int i = 1; i <= a_ub; i++)
		xorPrefix[i] = xorPrefix[i-1] ^ i;

	while (T--) {
		int a, b;
		cin >> a >> b;
		int needed = xorPrefix[a-1] ^ b;
		if (needed == 0) {
			cout << a << "\n";
		}
		else if (needed == a) {
			cout << a + 2 << "\n";
		}
		else cout << a + 1 << "\n";
	}

	return 0;
}
