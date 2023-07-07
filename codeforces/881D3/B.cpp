#include <bits/stdc++.h>

using namespace std;

void solution() {
    int32_t n;
    cin >> n;
    //vector<int32_t> a;
    int32_t x;
    int64_t maxSum = 0, minStep = 0, isNeg = 0;
    for (int32_t i = 0; i < n; i++) {
        cin >> x;
        //a.push_back(x);
        if (x < 0) {
            maxSum += x * (-1);
            isNeg += 1;
        }
        else if (x > 0) {
            maxSum += x;
            if (isNeg > 0) {
                minStep += 1;
                isNeg = 0;
            }
        }
    }

    if (isNeg > 0) {
        minStep += 1;
    }

    /*
    int32_t numSubSeqPos = 0, numSubSeqNeg = 0;
    for(int32_t i = 1; i < n; i++) {
        if (a[i-1] < 0 and a[i] > 0) {
            numSubSeqNeg += 1;
        }
        else if (a[i-1] > 0 and a[i] < 0) {
            numSubSeqPos += 1;
        }
    }

    if (n == 1 and a[0] == -1) {
        minStep += 1;
    }
    */

    cout << maxSum << " " << minStep << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int32_t T;
    cin >> T;
    while (T--) {
        solution();
    }

    return 0;
}
