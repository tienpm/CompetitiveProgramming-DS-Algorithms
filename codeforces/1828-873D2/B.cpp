#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fi first
#define se second
using pii = pair<int, int>;

int main() {
	ios::sync_with_stdio(0);
        cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int n;
	    	cin >> n;
	    	int p[n+1];
	    	for(int i = 1; i <= n; i++){
			int x;
			cin >> x;
			p[x] = i;
		    }
		vector<int> vis(n+1, 0);
	    	set<int> trace;

	    	int current = 0;
	    	for(int i = 1; i <= n; i++)
	    	{
			if(vis[i] || p[i]==i) {
		    		vis[i]=1;
		    		continue;
			};
			
			int u = i;
			vector<int> v;
			while(!vis[u]){
			    vis[u] = 1;
			    v.push_back(p[u]);
			    u = p[u];
			}
			
			sort(v.begin(),v.end());
		
			int tmp = v[1]-v[0];
			for(int i = 0; i < v.size()-1; i++){
			    current =__gcd(cur,v[i+1]-v[i]);
			}
	    	}
	    	
	    	cout << current << "\n";
	}

	return 0;
}
