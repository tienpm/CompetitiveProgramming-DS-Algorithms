#include<bits/stdc++.h>

using namespace std;

const int32_t INF = 1e9; 

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector <int32_t> a;
		for (size_t i = 0; i < n; i++) {
			int x;
			cin >> x;
			a.push_back(x);
		}

        int32_t minVal = *min_element(a.begin(), a.end());
        int32_t maxVal = *max_element(a.begin(), a.end());
        int32_t sum = minVal + maxVal;


        for (auto &num : a) {
            cout << sum - num << " ";
        }
        cout << "\n";

	}

	return 0;
}
