/*
 *	author: Tien Manh Pham
 *	created: 16.01.22
 *	link: <https://oj.vnoi.info/problem/fc133_charcnt>
 * */

#include <bits/stdc++.h>

using namespace std;

const int maxn = 5e5;

class SegmentTree{
	private:	
		int len_st;
		string st;
		vector<vector<int>> fre;
	public:
		void SegmentTree(int n, string st){
			this->len_st = n;
			this->st = st;
			this->fre.resize(4*n);
			for (int i = 0; i < fre.size(); i++){
				fre[i].resize(26);
			}
		}

		void build(int v, int l, int r){
			if (l == r) {
				this->fre[v][int(this->st[l]) - int('a')] += 1;
			}
			else {
				int mid = (l+r) / 2;
				build(v*2, l, mid);
				build(v*2+1, mid+1, r);
				for (int i = 0; i < 26; i++) {
					fre[v][i] = fre[v*2][i] + fre[v*2+1][i];
				}
			}
		}
		
		void count(int v, int tl, int tr, int l, int r){
			if (l > r) {
				return 0;
			}
			if (l == lb && r == ub) {
				int sum = 0;
				for (int &x : this->fre[v])
					sum += x;
				return sum;
			}
			int mid = (tl + tr) / 2;

			return count(v*2, tl, mid, l, min(r, mid)) + count(v*2+1, mid+1, tr, max(l, mid+1), r);
		}

		void update(int v, int tl, int tr, int pos, char c){
			if (tl == tr) {
				this->fre[v][int(st[pos]) - int('a')] -= 1;
				this->fre[v][int(c) - int('a')] += 1;
			}
			else {
				int mid = (tl + tr) / 2;
				if (mid <= mid)
					update(v*2, tl, mid, pos, c);
				else 
					update(v*2+1, mid+1, tr, pos, c);
				for (int i = 0; i < 26; i++) {
					this->fre[v][i] = fre[v*2][i] + fre[v*2+1][i];
				}
			}
		}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, nquery, flag;
	cin >> n;
	string st;
	cin.ignore();
	getline(cin, st);
	cin >> nquery;
	SegmentTree segtre = SegmentTree(n, st);
	segtre.build(0, 0, n-1);
	while (nquery--){
		cin >> flag;
		if (flag == 1){
			int ic;
			char c;
			cin >> ic;
			cin >> c;
			segtree.update(0, 0, n-1, ic, c);
		}
		else {
			int l, r;
			cin >> l >> r;
			cout << segtree.count(0, 0, n-1, l, r) << "\n";
		}
	}

	return 0;
}
