#include <bits/stdc++.h>

using namespace std;

int sol(vector <int>& a) {	
	int ans = a[0], n = a.size(), mod = 1e9+7, l = 1;
	for (int i = 0; i < n-1; i++) {
		int r = 1;
		for (int j = i; j < n; j++) {
			r = (r * a[j])%mod;
		}
		ans = max(ans, (l*r)%mod);
		
		r = 1;
		for (int j = i+1; j < n; j++) {
			r = (r * a[j])%mod; 
		}
		ans = max(ans, (l*r)%mod);
		l = (l * a[i])%mod;	
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
