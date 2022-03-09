#include <bits/stdc++.h>

using namespace std;

bool is_increase(vector<int> a) {
	for (int i = 1; i < a.size(); i++) 
		if (a[i] < a[i-1])
			return false;
	return true;
}

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		long long number_iter = 0;
		while (!is_increase(a)){
			++number_iter;
			if (number_iter % 2 != 0) {
				for (int i = 0; i < n; i+=2)
					if (i+1 < n && a[i] > a[i+1]) 
						swap(a[i], a[i+1]);
			}
			else {
				for (int i = 1; i < n; i += 2)
					if (i+1 < n && a[i] > a[i+1])
						swap(a[i], a[i+1]);
			}
		}

		cout << number_iter << "\n";

	}
	return 0;
}
