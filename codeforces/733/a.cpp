#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		int small_binary_decimal = 0;
		string st = to_string(n);
		for (char s : st)
			small_binary_decimal = max(small_binary_decimal, int(s) - int('0'));
		
		cout << small_binary_decimal << "\n";
	}

	return 0;
}
