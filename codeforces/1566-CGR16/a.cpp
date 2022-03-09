#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, s;
		cin >> n >> s;
		int ubValOfConsiderBound = (n+2)/2;	// from n / 2 to n
		cout << s / ubValOfConsiderBound << "\n";
	}

	return 0;
}
