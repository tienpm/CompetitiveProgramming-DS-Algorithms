/*
 *	author: Tien M. Pham
 *	created: 30.12.2022
 * */
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--){
		long long sum = 0;
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m);
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}

		for (int i = 0; i < m; i++) {
			int min_point = 0;
			for (int j = 0; j < n; j++) 
				if (a[min_point] > a[j]) min_point = j;
			a[min_point] = b[i];
			
		}

		for (int i = 0; i < n; i++)
			sum += a[i];
		cout << sum << "\n";
	}
	return 0;
}
