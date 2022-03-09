#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore();
	while (T--) {
		string st;
		getline(cin, st);
		int min_p = 0;
		for (int i = min_p+1; i < st.length(); i++)
			if (st[min_p] > st[i])
				min_p = i;

		cout << st[min_p] << " ";
		for (int i = 0; i < st.length(); i++)
			if (i != min_p)
				cout << st[i];
		cout << "\n";
	}

	return 0;
}
