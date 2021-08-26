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
		cout << "Case " << T << ": \n";
		cout << n << "\n";
		while (no_digit != 0 && n != 0) {
			int b = 0;
			for (int i = 0; i < no_digit; i++)
				b += exponentiation_10(10, i);

			for (int i = 0; i < no_digit; i++){
				cout << "current binary: " << b << "\n";
				if (n < b)
					b -= exponentiation_10(10, i);
				else {
					small_binary_decimal = small_binary_decimal + n / b;
					n = n % b;
					if (n == 0) break;
				}
			}

			--no_digit;
		}
		cout << small_binary_decimal << "\n";
	}

	return 0;
}
