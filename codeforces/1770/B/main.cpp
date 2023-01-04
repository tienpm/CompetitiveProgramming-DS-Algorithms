/*
 *	author: Tien M. Pham
 *	created: 30.12.2022
 * */
#include<bits/stdc++.h>

using namespace std;

void solution(){
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n/2; i++)
		cout << n-i << " " << (n+1)-(n-i) << " ";
	if (n & 1)
		cout << n/2 + 1;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while (T--) {
		solution();		
	}
	return 0;
}
