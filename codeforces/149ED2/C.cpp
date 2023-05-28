#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	getline(cin, s);
	char c = '\n';
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '?') {
			if (c == '\n') {
				s[i] = '0';
			}
			else {
				s[i] = c;
			}
			
			c = s[i];
		}
	}

	cout << s << "\n";
}

int main() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(nullptr);

	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		solve();		
	}

	return 0;
}
