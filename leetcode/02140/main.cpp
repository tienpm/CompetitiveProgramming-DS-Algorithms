/*
 *	author: Tien M. Pham
 *	created: 05.12.2023
 *	url: https://leetcode.com/problems/solving-questions-with-brainpower/description/
 *	status: AC
 *
 * */

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	long long mostPoints(vector<vector<int>>& questions) {
		int n = questions.size();
		vector <long long> dp(n+1, 0);
		
		for (int i = n - 1; i >= 0; i--) {
			dp[i] = max(dp[i+1], dp[min(i + questions[i][1] + 1, n)] + questions[i][0]); 
		}

		return dp[0];
	}
};

int main() {
	int n;
	vector<vector<int>> questions;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<int> question(2);
		cin >> question[0] >> question[1];
		questions.push_back(question);
	}
	
	Solution sol;
	cout << sol.mostPoints(questions) << "\n";

	return 0;
}
