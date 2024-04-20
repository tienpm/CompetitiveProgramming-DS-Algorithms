/*
    author: Tien M. Pham
    VNOJ problem: https://oj.vnoi.info/problem/dquery
*/

#include <bits/stdc++.h>

#define MAXN 1000001

using namespace std;

int32_t block_size, answer = 0;
vector<int32_t> a;
map<int32_t, int32_t> sqrt_decomp;
vector <int32_t> freq;

struct Query {
    int32_t l, r, idx;
     Query(int32_t i, int32_t from, int32_t to) {
        idx = i;
        l = from;
        r = to;
    }

    bool operator<(Query other) const {
        return make_pair(l / block_size, r) < make_pair(other.l / block_size, other.r);
    }
};

void add(int32_t idx) {
    freq[a[idx]] += 1;
    if (freq[a[idx]] == 1)
        answer += 1;
}

void remove(int32_t idx) {
    freq[a[idx]] -= 1;
    if (freq[a[idx]] == 0)
        answer -= 1;
}

int32_t get_answer() {
    return answer;
}

vector<int32_t> mo_s_algorithm(vector<Query> &queries) {
    vector<int32_t> answers(queries.size());
    sort(queries.begin(), queries.end());

    // Initialize square root decomposition (sqrt decomposition)
    freq.assign(MAXN, 0);
    

    int32_t cur_l = 0, cur_r = -1;
    for (Query q : queries) {
        while (cur_l > q.l) {
            cur_l -= 1;
            add(cur_l);
        }

        while (cur_l < q.l) {
            remove(cur_l);
            cur_l += 1;
        }

        while (cur_r > q.r) {
            remove(cur_r);
            cur_r -= 1;
        }

        while(cur_r < q.r) {
            cur_r += 1;
            add(cur_r);
        }
        /*
        cout << "debug: " << q.l << " " << q.r << "\n";
        cout << "debug " << cur_l << " " << cur_r << "\n";
        cout << answer << "\n";
        for (int32_t i = 0; i < 10; i++) cout << freq[i] << " ";
        cout << "\n";
        */
        answers[q.idx] = get_answer();
    }

    return answers;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t n, q;
    cin >> n;
    a.assign(n, 0);
    for (int32_t i = 0; i < n; i++) cin >> a[i];
    
    block_size = (int)sqrt(n + 0.0) + 1;
    vector<Query> queries;
    
    cin >> q;
    int32_t l, r;
    for (int32_t i = 0; i < q; i++) {
        cin >> l >> r;
        queries.push_back(Query(i, l - 1, r - 1));
    }

    vector<int32_t> answers = mo_s_algorithm(queries);
    
    for (int32_t ans : answers)
        cout << ans << "\n";
        
    return 0;
}
