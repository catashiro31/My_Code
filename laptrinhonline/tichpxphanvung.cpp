#include <bits/stdc++.h>
#define maxn 200
using namespace std;
int n, m;
int Matrix[maxn][maxn];
int dx[] = {1,-1,0,0,1,-1,1,-1};
int dy[] = {0,0,1,-1,1,-1,-1,1};
int ccount;
void DFS(int x, int y) {
	Matrix[x][y] = 1;
	for (int i = 0; i < 8; i++) {
		int u = dx[i] + x;
		int v = dy[i] + y;
		if (0 <= u && 0 <= v && u < n && v < m && !Matrix[u][v]) {
			ccount++;
			DFS(u,v);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt","r",stdin);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> Matrix[i][j];
	}
	vector<int> kq;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!Matrix[i][j]) {
				ccount = 1;
				DFS(i,j);
				kq.push_back(ccount);
			}
		}
	}
	cout << kq.size() << '\n';
	sort(kq.begin(),kq.end());
	for (int x : kq) cout << x << " ";
}
