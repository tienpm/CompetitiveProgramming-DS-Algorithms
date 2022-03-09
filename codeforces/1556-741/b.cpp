#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector <int> a(n);
		int is_odds[2] = {0, 0};
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			is_odds[a[i] & 1]++;
		}

		if (abs(is_odds[1] - is_odds[0]) < 2) {
			int ptr0 = 0, ptr1 = 1;
			int minSwap0 = 0, minSwap1 = 0;
			for (int i = 0; i < n; i++)
				if (a[i] & 1) {
					minSwap0 += abs(i - ptr0);
					minSwap1 += abs(i - ptr1);
					ptr0 += 2;
					ptr1 += 2;
				}
			if (is_odds[0] == is_odds[1]) {
				cout << min(minSwap0, minSwap1) << "\n";
				continue;
			}
			else if (is_odds[1] > is_odds[0]) {
				cout << minSwap0 << "\n";
				continue;
			}
			cout << minSwap1 << "\n";
		}
		else cout << -1 << "\n";
	}

	return 0;
}
