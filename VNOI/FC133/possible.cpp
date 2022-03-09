/*
 *	Name: Tien M. Pham
 *	Latest update: 12.14.21
 *	Content: Free Contest 133 - POSSIBLE PROBLEM - AC
 * */

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	long long x, sum = 0;
	// Input
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
	}

	// Output
	if (sum % 2 == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
