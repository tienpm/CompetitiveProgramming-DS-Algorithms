#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n, min_step = INT_MAX;
	cin >> m >> n;
	vector <vector<int>> a(m, vector<int> (n));
	vector <vector<pair<int, int>>> tele(256);
	vector <vector<bool>> visited(m, vector<bool> (n, false));
	queue <vector<int>> q;
	int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
			if (a[i][j] > 0)
				tele[a[i][j]].push_back({i, j});
		}
	}

	q.push({0, 0, 0});
	visited[0][0] = true;
	for (int j = 0; j < tele[a[0][0]].size(); j++){
		int tele_x = tele[a[0][0]][j].first, tele_y = tele[a[0][0]][j].second;
		if (tele_x != 0 || tele_y != 0 && !visited[tele_x][tele_y]){
			q.push({tele_x, tele_y, 0});
			visited[tele_x][tele_y] = true;
		}
	}

	while (!q.empty()){
		vector<int> top = q.front();
		q.pop();
		int x = top[0], y = top[1], steps = top[2];
		cout << "pop: " << x << " " << y << " " << steps << "\n";
		if (x == m-1 && y == n-1){
			cout << "success:" << x << " " << y << " " << steps << "\n";
			min_step = min(min_step, steps);
			continue;
		}

		for (int d = 0; d < 4; d++){
			int x_next = x + dx[d], y_next = y + dy[d];
			if (x_next >= 0 && x_next < m && y_next >= 0 && y_next < n && !visited[x_next][y_next]){
				q.push({x_next, y_next, steps+1});
				visited[x_next][y_next] = true;
				//cout << "push: " << x_next << " " << y_next << " " << steps+1 << "\n";
				if (a[x_next][y_next] > 0 && tele[a[x_next][y_next]].size() != 0){
					//cout << "pass" << x_next << " " << y_next << "\n";
					for (int j = 0; j < tele[a[x_next][y_next]].size(); j++){
						int tele_x = tele[a[x_next][y_next]][j].first, tele_y = tele[a[x_next][y_next]][j].second;
						// cout << tele_x << " " << tele_y << "\n";
						if (tele_x != x_next || tele_y != y_next && !visited[tele_x][tele_y]){
							//cout << "debug" << "\n";
							q.push({tele_x, tele_y, steps+1});
							//cout << "push: " << x_next << " " << y_next << " " << steps+1 << "\n";
							visited[tele_x][tele_y] = true;
						}
					}
				}
			}
		}

	}

	cout << min_step << "\n";

	return 0;
}