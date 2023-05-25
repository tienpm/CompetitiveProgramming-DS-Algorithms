/*
 * 	author: Tien M. Pham
 * 	created: 19.05.2023
 * 	description: https://codeforces.com/contest/1833/problem/A
 * 	status: AC
 */

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	cin.ignore();
	string melody;
	getline(cin, melody);
	unordered_map<string, int> freq;
	for (int i = 0; i < n; i++) {
		if (i + 1 < n) {
			string key = "";
			key += melody[i];
			key += melody[i+1];
			if (freq.count(key) == 0) {
				freq[key] = 1;
			}
			else {
				freq[key] += 1;
			}
		}
	}
	cout << int(freq.size()) << "\n";
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
