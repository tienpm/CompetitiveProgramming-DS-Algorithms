/*
 *	author: Tien M. Pham
 *	created: 05.01.2023
 * */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	int minimumRounds(vector<int>& tasks) {
		int32_t res = 0;

		return res;
	}
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int32_t x = 0;
	vector<int32_t> tasks;
	do {
		cin >> x;
		tasks.push_back(x);
	}
	while (x);
	
	Solution sol;
	cout << sol.minimumRounds(tasks) << "\n";
	for (auto x : tasks)
		cout << x << " "; 
	
	return 0;
}
