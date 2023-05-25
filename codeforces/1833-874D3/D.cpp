/*
 * 	author: Tien M. Pham
 * 	created: 23.05.2023
 * 	description: https://codeforces.com/contest/1833/problem/D
 * 	status: WA
 */

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int findMaxPosition(vector<int> &a) {
	int val = -INF, maxPos = -1;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] > val) {
			val = a[i];
			maxPos = i;
		}
	}

	return maxPos;
}

void solution() {
	int n;
	cin >> n;
	vector<int> p(n);
	for (auto &x : p) {
		cin >> x;
	}

	// Find the maximum position of an array
	int right = findMaxPosition(p);

	// Find left position
	int left = right - 1;
	while (left >= 0 && p[left - 1] <= p[left]) {
		left -= 1;
	}
	vector <int> b(n);
	int id = 0;
	for (int i = right; i < n; i++) {
		b[id] = p[i];
		id += 1;
	}

	for (int i = right - 1; i >= 0 and i >= left; i--) {
		b[id] = p[i];
		id += 1;
	}

	for (int i = 0; i < left; i++) {
		b[id] = p[i];
		id += 1;
	}

	for (auto &val : b) {
		cout << val << " ";
	}
	cout << "\n";
}

int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(nullptr);
	
	int T;
	cin >> T;
	while (T--) {
		solution();
	} 

	return 0;
}
