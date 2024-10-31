#include <bits/stdc++.h>
#define maxn 200
using namespace std;
int n, m;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
void DFS(int x, int y, vector<vector<int>> &Matrix) {
	Matrix[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int u = x + dx[i];
		int v = y + dy[i];
		if (0 <= u && u < n && 0 <= v && v < m && !Matrix[u][v]) DFS(u,v,Matrix);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt","r",stdin);
	cin >> n >> m;
	vector<vector<int>> Matrix(n,vector<int> (m));
	vector<vector<int>> nMatrix(n,vector<int> (m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> Matrix[i][j];
			nMatrix[i][j] = Matrix[i][j];
		}
	}
	int ccount1 = 0, ccount2 = 0; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!Matrix[i][j]) {
				ccount1++;
				DFS(i,j,Matrix);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (!nMatrix[i][0]) {
			ccount2++;
			DFS(i,0,nMatrix);
		}
		if (!nMatrix[i][m-1]) {
			ccount2++;
			DFS(i,m-1,nMatrix);
		}
	}
	for (int j = 0; j < m; j++) {
		if (!nMatrix[0][j]) {
			ccount2++;
			DFS(0,j,nMatrix);
		}
		if (!nMatrix[n-1][j]) {
			ccount2++;
			DFS(n-1,j,nMatrix);
		}
	}
	cout << ccount1 - ccount2;
}
