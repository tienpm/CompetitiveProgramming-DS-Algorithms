/*
 *	author: Tien M. Pham
 *	created: 19.05.2023
 *	description: https://codeforces.com/contest/1833/problem/C
 *	status: AC
 */

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector <int> a(n);
	int noOdd = 0, noEven = 0, min_element = 1000000000;
	for (int& x : a) {
		cin >> x;
		if (x % 2 == 0) {
			++noEven;
		}
		else { 
			++noOdd;
		}
		if (min_element > x) 
			min_element = x;
	}

	if (min_element % 2 != 0) {
		cout << "YES\n";
	}
	else {
		if (noOdd != 0) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}

};

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
