/*
 * 	author: Tien M. Pham
 * 	created: 19.05.2023
 * 	description: https://codeforces.com/contest/1833/problem/B
 * 	status: AC
 */

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n), b(n);
	vector<pair<int, int>> tmp;

	for (int i = 0; i < n ; i++) {
		int x;
		cin >> x;
		tmp.push_back({x, i});
	}
	sort(tmp.begin(), tmp.end());
	
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());

	vector <int> result(n);
	for (int i = 0; i < n; i++) {
		result[tmp[i].second] = b[i];
	}

	// Print result
	for (int x : result) {
		cout << x << " ";
	}
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	cin >> T;
	while (T--) {
		solve();
	}

	return 0;
}
