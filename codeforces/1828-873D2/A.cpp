/*
 *	author: Tien M. Pham
 *	created: 14.05.2023
 *	description: https://codeforces.com/contest/1828/problem/A
 *	status: AC
 * */

#include <bits/stdc++.h>

using namespace std;

void print_result(vector<int>& a) {
	for (auto x : a)
		cout << x << " ";
	cout << "\n";
}

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector <int> ans(n);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			ans[i] = i+1;
			sum += ans[i];
		}

		if (sum % n == 0) {
			print_result(ans);			
		}
		else {
			int sub = ((sum / n) + 1) * n - sum;
			for (int i = n - 1; i >= 0; i--) 
			{
				if (sub != 0) {
					int divSub = (sub + ans[i]) / (i + 1);
					int modSub = (sub + ans[i]) % (i + 1);
					if (modSub != 0) {
						ans[i] += (i + 1) * divSub > ans[i] ? ans[i] : 0;
						sub = modSub;
					}
					else {
						ans[i] += sub;
						sub = 0;
					}
	
					if (ans[i] > 1000) {
						int prev = ans[i];
						ans[i] = (1000 / (i + 1)) * (i + 1);
						sub += prev - ans[i];
					}
				}
			}
			print_result(ans);
		}
		
	}

	return 0;
}
