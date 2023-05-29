/*
 *	author: Tien M. Pham
 *	created: 29.05.2023
 *	description: https://leetcode.com/problems/kth-largest-element-in-an-array/description/
 *	status: 
 * */
#include <bits/stdc++.h>

using namespace std;

class Solution {
public: 
	int findKthLargest(vector<int>& nums, int k) {
		priority_queue<int> pq;
		for (auto &x : nums) {
			pq.push(x);
		}

		while (--k) {
			pq.pop();
		}

		return pq.top();
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	vector <int> nums(n); 
	for (auto &x : nums) {
		cin >> x;
	}

	Solution sol;
	cout << sol.findKthLargest(nums, k) << "\n";

	return 0;
}
