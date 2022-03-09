#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cin.ignore();
		string st;
		getline(cin, st);
		string down_row = "";
		int i = 0;
		while (i < n) {
			if (st[i] == 'U') {
				if (i + 1 < n and st[i+1] == 'D') {
					down_row += "UD";
					i += 2;
				}
				else {
					down_row += "D";
					i += 1;
				}
			}
			else if (st[i] == 'D') {
				down_row += "U";
				i += 1;
			}
			else if (st[i] == 'L') {
				if (i+1 < n and st[i+1] == 'R') {
					down_row += "LR";
					i += 2;
				}
				else {
					down_row += "R";
					i += 1;
				}
			}
			else if (st[i] == 'R') {
				down_row += "L";
				i += 1;
			}
		}

		cout  << down_row << "\n";
	}

	return 0;
}
