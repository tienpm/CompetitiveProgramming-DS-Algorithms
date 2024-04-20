#include <bits/stdc++.h>

using namespace std;

void sieve_algo(int32_t &n, vector<int32_t> &primes) {
    vector<bool> is_prime(n+1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    for (int32_t i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int32_t j = i * i; j <= n; j += i) 
                is_prime[j] = false;
        }
    }
    
    for (int32_t i = 2; i <= n; i++) 
        if (is_prime[i])
            primes.push_back(i);
}

vector<pair<int32_t, int32_t>> integer_factor(int32_t x, vector<int32_t> &prime) {
    vector<pair<int32_t, int32_t>> prime_factor;
    for (int32_t &p : prime) {
        if (p * p > x)
            break;
        int32_t cnt = 0;
        while (x % p == 0) {
            cnt += 1;
            x /= p;
            
        }
        if (cnt > 0)
            prime_factor.push_back({p, cnt});
    }
    if (x > 1) {
        prime_factor.push_back({x, 1});
    }

    return prime_factor;
}

void solution(vector<int32_t> &primes) {
    int32_t x;
    cin >> x;
    vector<int32_t> div_chain = {x};
    if (x >> 1) {
        x -= 1;
        div_chain.push_back(x);
    }
    vector<pair<int32_t, int32_t>> factors = integer_factor(x, primes);

    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int32_t maxn = 1e5;
    vector<int32_t> primes;
    sieve_algo(maxn, primes);

    int32_t T;
    cin >> T;
    while (T--) {
        solution(primes);
    }

    return 0;
}
