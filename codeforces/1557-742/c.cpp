#include <bits/stdc++.h>

using namespace std;

void solve() {
	string n;
	getline(cin, n);
	int oddp = 0, evenp = 0;
	for (int i = 0; i < n.length(); i++) {
		if (i & 1)
			oddp = oddp * 10 + int(n[i]) - int('0');
		else 
			evenp = evenp * 10 + int(n[i]) - int('0');
	}
	cout << (oddp + 1) * (evenp + 1) - 2;
}

int main() {
	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		solve();
		cout << "\n";
	}

	return 0;
}
