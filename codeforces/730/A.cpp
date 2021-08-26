#include <bits/stdc++.h>

using namespace std;

int count_digit(int x) {
	int number_digit = 0;
	while (x != 0){
		++number_digit;
		x /= 10;
	}

	return number_digit;
}

int exponentiation_10(int a, int b) {
	long long res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}

	return res;
}

int main(){
	int T;
	cin >> T;
	while (T--){
		int n;
		cin >> n;
		int no_digit = count_digit(n);
		int small_binary_decimal = 0;
		int b = 0;
		for (int i = 0; i < no_digit; i++) {
			b = b ^ (1 << i);
		}
		vector <int> pbit;
		while (b != 0 && n != 0){
			int decimal = 0;
			pbit.resize(0);
			int tmp = b;
			while (tmp != 0) {
				pbit.push_back(tmp & 1);
				tmp >>= 1;
			}

			for (int i = pbit.size() - 1; i >= 0; i--)
				decimal = decimal*10 + pbit[i];

			if (n >= decimal) {
				small_binary_decimal += n / decimal;
				n %= decimal;
			}
			--b;
		}
		
		cout << small_binary_decimal << "\n";
	}

	return 0;
}
