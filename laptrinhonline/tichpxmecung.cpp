#include <bits/stdc++.h>
#define maxn 1000
using namespace std;
int n, m; 
int Check[maxn][maxn];
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
void BFS(int x_st, int y_st, int x_fn, int y_fn, vector<vector<int>> Matrix) {
	queue<pair<int,int>> q;
	q.push({x_st,y_st});
	Check[x_st][y_st] = 1;
	while (!q.empty()) {
		int nx = q.front().first;
		int ny = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int u = nx+dx[i];
			int v = ny+dy[i];
			if (0 <= u && u < n && 0 <= v && v < m && !Check[u][v] && Matrix[u][v] != 1) {
				q.push({u,v});
				Check[u][v] = Check[nx][ny]+1;
			}
			if (u == x_fn && v == y_fn) {
				cout << Check[u][v]-1;
				return;
			}
		} 
	}
	cout << -1;
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	vector<vector<int>> Matrix(n,vector<int> (m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> Matrix[i][j];
		}
	}
	pair<int,int> st; cin >> st.first >> st.second;
	pair<int,int> fn; cin >> fn.first >> fn.second;
	memset(Check,0,sizeof(Check));
	BFS(st.first-1, st.second-1, fn.first-1, fn.second-1, Matrix);
}
