/*
 *	author: Tien M. Pham
 * */
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		vector<int> a(n);
		map<int, int, greater<int>> freq;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			freq[a[i]]++;
		}
		
		if (freq.size() == 1) {
			cout << "NO\n";
			continue;
		}
		
		cout << "YES\n";
		for (auto &it : freq) {
			cout << it.first << " ";
			it.second--;
		}
		for (auto &it : freq) {
			while (it.second > 0) {
				cout << it.first << " ";
				it.second--;
			}
		}
		cout << "\n";
	}
	
	return 0;
}
