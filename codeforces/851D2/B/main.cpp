#include <bits/stdc++.h>

using namespace std;

int sum_digit(long long x){
	int sum = 0;
	while (x % 10 != 0) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main(){
	int T;
	cin >> T;
	while (T--) {
		long long n;
		cin >> n;
		if (n & 1) {
			int sumDigit = sum_digit(n);
			if (n % 10 != 9) {
				cout << n / 2 << " " << n / 2 + 1 << "\n"; 
				continue;
			}
			int a = 0;
			string p = to_string(n);
			string ans = "";
			int i = 0;
			while(a < sumDigit / 2){
		    		a += p[i] - '0';
		    		ans += p[i];
		    		i++;
			}
			ans.pop_back();
			i--;
			a -= p[i] - '0';
			int rem = sumDigit / 2 - a;
			ans += (char)rem + '0';
			i++;
			while(i < p.size()){
		    		ans += '0';
		    		i++;
			}
			int u = stoi(ans);
			int v = n - u;
			cout << u << " " << v << "\n";
		}
		else {
			cout << n / 2 << " " << n / 2 << "\n";
		}
	}
	return 0;
}
