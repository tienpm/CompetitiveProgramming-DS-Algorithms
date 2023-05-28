#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	cin.ignore();
	string a;
	getline(cin, a);
	a = a + '1';
	int s = 0, cur = 1;
	for (int i = 0; i <= n; i++) {
		if (a[i] == a[i + 1]) {
			cur += 1;
		}
		else {
			s = max(s, cur + 1);
			cur = 1;
		}
	}
	
	
	cout << s << "\n";
}

int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		solve();		
	}

	return 0;
}
