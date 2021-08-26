#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = a;
}

int main() {
	int T;
	cin >> T;
	vector<int> number_breaks;
	while (T--) {
		int a, b, u, v;
		cin >> a >> b;

		if ((a + b) % 2 == 0) {
			u = (a + b + 1) / 2;
			v = u + 1;
			for (int breaks = 0; breaks <= a + b + 1; breaks++) {
				if ((u - b >= breaks && u - breaks == a) || () || (v - a >= breaks && v - breaks == b))
					number_breaks.push_back(breaks);
			}
		}
		else {
			u = (a + b) / 2;
			v = (a + b) / 2 + 1;
			for (int breaks = 0; breaks <= a + b; breaks++) {
				if (a >= b) {
					if (v - a >= breaks && v - breaks == b && a == u + breaks)
						number_breaks.push_back(breaks);
				}
				else {
					if (v - b >= breaks && v - breaks == a && )
						number_breask.push_back(breaks);
				}
			}
		}
 
		cout << number_breaks.size() << "\n";
		for (int x : number_breaks)
			cout << x << " ";
		cout << "\n";
	}

	return 0;
}
