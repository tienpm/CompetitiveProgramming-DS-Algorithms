/*
 *	author: Tien M. Pham
 *	created: 30.12.2022
 * */
#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	return b ? gcd(a, a%b) : a;
}

long long lcm(long long a, long long b) {
	return a / gcd(a,b) * b;
}

void solution(){
	int n;
	cin >> n;
	vector<long long> a(n);
	for(long long &x : a)
		cin >> x;
	
	for (long long x : a)
		cout << x << " ";
	cout << "\n";

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while (T--){
		solution();
	}
	return 0;
}
