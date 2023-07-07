#include <bits/stdc++.h>

using namespace std;

void solution() {
	int32_t n;
    int64_t maxEqual = 1;
    cin >> n;
	vector <int32_t> a(n), b(n);
    vector <int64_t> freqA(2 * n + 1, 0), freqB(2 * n + 1, 0);

    for (auto &x : a) {
        cin >> x;
    }

    for (auto &x : b) {
        cin >> x;
    }

    int64_t lenEqualA = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1]) {
            lenEqualA += 1;
        }
        else {
            freqA[a[i-1]] = max(freqA[a[i-1]], lenEqualA);
            lenEqualA = 1;
        }
    }
    freqA[a[n-1]] = max(freqA[a[n-1]], lenEqualA);

    int64_t lenEqualB = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i-1]) {
            lenEqualB += 1;
        }
        else {
            freqB[b[i-1]] = max(freqB[b[i-1]], lenEqualB);
            lenEqualB = 1;
        }
    }
    freqB[b[n-1]] = max(freqB[b[n-1]], lenEqualB);

    for (int i = 1; i <= 2 * n; i++) {
        maxEqual = max(maxEqual, freqA[i] + freqB[i]); 
    }

    cout << maxEqual << "\n";
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
