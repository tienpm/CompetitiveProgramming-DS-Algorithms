#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int c, d;
		cin >> c >> d;
		if (c == d) {
			if (c == 0)
				cout << 0 << "\n";
			else 
				cout << 1 << "\n";
			continue;
		}
		if ((c + d) % 2 == 0)
			cout << 2 << "\n";
		else 
			cout << -1 << "\n";

		/*
		bool not_found = true;
		for (int i = 2; i <= abs(c-d) / 2; i++)
			if ((c + d) % i == 0) {
				cout << i << "\n";
				not_found = false;
				break;
			}

		if (not_found)
			cout << "-1" << "\n";
		*/
	}

	return 0;
}
