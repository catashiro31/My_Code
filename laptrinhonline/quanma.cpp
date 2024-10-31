#include <bits/stdc++.h>
#define maxn 1000
using namespace std;
int n, m;
int Matrix[maxn][maxn];
int dx[] = {2,2,1,1,-1,-1,-2,-2};
int dy[] = {-1,1,-2,2,-2,2,-1,1};
void BFS(int x_st, int y_st, int x_fn, int y_fn) {
	queue<pair<int,int>> q;
	q.push({x_st,y_st});
	Matrix[x_st][y_st] = 1;
	while (!q.empty()) {
		int nx = q.front().first;
		int ny = q.front().second;
		q.pop();
		for (int i = 0; i < 8; i++) {
			int u = nx+dx[i];
			int v = ny+dy[i];
			if (0 <= u && u < n && 0 <= v && v < m && Matrix[u][v] == 0) { 
				q.push({u,v});
				Matrix[u][v] = Matrix[nx][ny]+1;
			}
			if (u == x_fn && v == y_fn) {
				cout << Matrix[u][v] - 1;
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
	pair<int,int> st;
	cin >> st.first >> st.second;
	pair<int,int> fn; 
	cin >> fn.first >> fn.second;
	memset(Matrix,0,sizeof(Matrix));
	BFS(st.first-1,st.second-1,fn.first-1,fn.second-1);
}
