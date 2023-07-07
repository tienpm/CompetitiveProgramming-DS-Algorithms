#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	int numPairs = 0;
	vector <int> a(n), b(n);
	for (auto &x : a) {
		cin >> x;
	}

	for (auto &x: b) {
		cin >> b;
	}

	vector <pair<float, int>> d;
	for (int i = 0; i < n; i++) {
		if (b[i] % a[i] == 0)
			d.push_back({b[i] / a[i], i});
	}
	sort(d.begin(), d.end());

	for (int i = 0; i < n; i++) {
		int lo = lower_bound(d.begin(), d.end(), a[i]) - d.begin();
		int up = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
		for (int j = up; j <= lo; j++) {
			
		}

	}

	cout << numPairs << "\n";
}

void solve1() {	
	int n;
	int numPairs = 0;
	vector <int> a(n), b(n);
	unorder_map <int> afre;
	unorder_map <int> bfre;
	for (auto &x : a) {
		cin >> x;
		if (afre.find(x) != afre.end()) {
			afre[x] = 0;
		}
		else
			afre[x] += 1;
	}

	for (auto &x: b) {
		cin >> b;
		if (bfre.find(x) != bfre.end()) {
			bfre[x] = 0;
		}
		else 
			bfre[x] += 1;
	}

	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		int max_aj = 2*n / a[i];
		for (int j = a[i] + 1; j <= max_aj; j += a[i]) {
				
		}
	}
}

int main() {
	int T;
	while (T--) {
		solve1();
	}

	return 0;
}
