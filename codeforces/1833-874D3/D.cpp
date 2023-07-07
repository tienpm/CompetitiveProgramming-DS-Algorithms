/*
 * 	author: Tien M. Pham
 * 	created: 23.05.2023
 * 	description: https://codeforces.com/contest/1833/problem/D
 * 	status: AC
 */

#include <bits/stdc++.h>

using namespace std;

const int32_t INF = 1e9;

int32_t findMaxPosition(vector<int32_t> &a, int32_t l, int32_t r) {
	int32_t val = -INF, maxPos = 0;
	for (int32_t i = l; i < r; i++) {
		if (a[i] > val) {
			val = a[i];
			maxPos = i;
		}
	}

	return maxPos;
}

bool maximumLexicography(vector <int32_t> &a, vector <int32_t> b) {
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) {
            return false;
        }
        else if (a[i] > b[i]) {
            return true;
        }
    }

    return true;
}


void solution() {
	int32_t n;
	cin >> n;
	vector<int32_t> p(n);
	for (int32_t &x : p) {
		cin >> x;
	}

	// Maximum position of an array - 1 is the right position
	int32_t right = findMaxPosition(p, 1, n);
    if (right != n - 1) {
        right -= 1;
    }

    vector <int32_t> b(n), bc(n, 0);

    for (int32_t left = 0; left <= right; left++) {
        int32_t i = 0;
        for (int32_t j = right + 1; j < n; j++) {
            b[i] = p[j];
            i += 1;
        }

        for (int32_t j = right; j >= left; j--) {
            b[i] = p[j];
            i += 1;
        }
        
        for (int32_t j = 0; j < left; j++) {
            b[i] = p[j];
            i += 1;
        }

        if (maximumLexicography(b, bc)) {
            bc = b;
        }
    }

	for (auto &val : bc) {
		cout << val << " ";
	}
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int32_t T;
	cin >> T;
	while (T--) {
		solution();
	} 

	return 0;
}
