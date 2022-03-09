#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define pi pair<int,int>
#define x first
#define y second

const int mxn = 5e5+5;
string s;
int n, q, T[26][mxn];
int type, l, r;
char c;
void update(int t, int u, int val){
    while (u <= n) {
        T[t][u] += val;
        u += (u &-u);
    }
}
int get(int t, int u){
    int res = 0;
    while (u > 0) {
        res += T[t][u];
        u -= (u & -u);
    }
    return res;
}
signed main(){
    ios_base::sync_with_stdio(0);   
    cin.tie(0); cout.tie(0);
    cin >> n >> s >> q;
    for (int i = 0; i < s.size(); i++) update(s[i] - 'a', i + 1, 1);
    while (q--) {
        cin >> type >> l;
        if (type == 1) {
            cin >> c;
            update(s[l - 1] - 'a', l, -1);
            s[l - 1] = c;
            update(s[l - 1] - 'a', l, 1);
        }
        else {
            cin >> r;
            int ans = 0;
            for(int i = 0 ; i < 26; i++)  ans += (get(i, r) - get(i, l - 1) > 0);
            cout << ans << endl;
        }
    }
}