#include <bits/stdc++.h>

using namespace std;

int sol(vector <int>& a) {	
	int n = a.size(), mod = 1e9+7, ans = -1e9;
	vector <int> left(n);
	left[0] = 1;
	for (int i = 1; i < n; i++){
		left[i] = (left[i-1] * a[i-1]) % mod;
	}
	
	int right = 1;
	for (int i = n-1; i >= 0; i--) {
		int next_right = (right * a[i]) % mod;
		ans = max(ans, max((left[i] * right)%mod, (left[i] * next_right)%mod));
		right = next_right;
	}

	return ans;
}

int main(){
	// Input
	int n;
	cin >> n;
	vector <int> a(n);
       	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	// Output
	cout << sol(a) << "\n";
		
	return 0;
}
