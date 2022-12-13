/*
	author: Cero
	created: 08.04.2022
	status: AC
*/

# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.length() == 0)
			return 0;

		int lcs = 1;
		int beginSub_id = 0;
		unordered_map <char, int> f;
		for (int i = 0; i < s.length(); i++) {
			if (f.find(s[i]) == f.end() || f[s[i]] < beginSub_id){
				f[s[i]] = i;
				if (i == s.length()-1)
					lcs = max(lcs, i - beginSub_id + 1);
			}
			else {
				lcs = max(lcs, i - beginSub_id);
				beginSub_id = f[s[i]] + 1;
				f[s[i]] = i;
			}
		}

        return lcs;
    }
};

int main() {
	string s;
	getline(cin, s);
	Solution sol = Solution();
	cout << sol.lengthOfLongestSubstring(s) << "\n";

	return 0;
}