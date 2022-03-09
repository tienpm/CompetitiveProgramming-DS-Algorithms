#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> single_b(n);
	for (int i = 0; i < n; i++)
		cin >> single_b[i];

	if (n == 1) {
		cout << 0 << "\n";
	}
	else {
		stack <int> s;
		long long subseg = 0;
		for (int i = 0; i < n; i++)
			if (i % 2 == 0) {
				s.push(single_b[i]);
			}
			else {
				int close_b = single_b[i];
			       	while (!s.empty() and s.top() > 0 and close_b > 0) {
					int num_brackets = min(s.top(), close_b);
				       	subseg += (long long) num_brackets;
				       	s.top() -= num_brackets;
				       	close_b -= num_brackets;
				       	if (s.top() == 0 and close_b >= 0) {
						s.pop();
						int numSubs = 0;
					       	while (!s.empty() and s.top() == -1) {
							subseg += 1;
							numSubs += 1;
							s.pop();
					       	}
						
						if (close_b == 0) {
							while (numSubs != 0) {
								s.push(-1);
								numSubs--;
							}
						}
				       	}
			       	}
				if (close_b > 0) {
					while (!s.empty())
						s.pop();
				}
				else
					s.push(-1);

			}
		cout << subseg << "\n";
	}


	return 0;
}
