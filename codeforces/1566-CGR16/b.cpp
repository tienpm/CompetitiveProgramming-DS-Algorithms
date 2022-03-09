#include<bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		string s;
		getline(cin, s);
		int bit0 = 0, bit1 = 0;
		int sum_mex = 0;
		if (s[0] == '0') {
			bit0++;
			sum_mex = 1;
		}
		else {
			bit1++;
			sum_mex = 0;
		}

		for (int i = 1; i < s.length(); i++) {
			if (s[i-1] != s[i]) {
				if (s[i] == '0') {
					bit0++;
					sum_mex += 1;
				}
				else {
					bit1++;
				}

				if (sum_mex > 2) {
					cout << 2 << "\n";
					sum_mex = -1;
					break;
				}
			}
		}
		
		if (sum_mex != -1)
			cout << sum_mex << "\n";
	}

	return 0;
}
