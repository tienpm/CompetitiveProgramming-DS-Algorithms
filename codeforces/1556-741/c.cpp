#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> single_b(n);
	for (int i = 1; i < n; i++)
		cin >> single_b[i];
	if (n == 1) {
		cout << 0 << "\n";
	}
	else {
		stack <int> s;
		s.push(single_b[0]);
		for (int i = 0; i < n; i++)
			if (i & 1) {
			
			}
			else {
			
			}
	}


	return 0;
}
