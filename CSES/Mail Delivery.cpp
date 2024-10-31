#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;
vector<int> paths;
void DFS(vector<pair<int,int>> adjList[], vector<bool> &seen, int u) {
	while(!adjList[u].empty()) {
		int v = adjList[u].back().first;
		int pos = adjList[u].back().second;
		adjList[u].pop_back();
		if (seen[pos]) continue;
		seen[pos] = true;
		DFS(adjList,seen,v);
	}
	paths.push_back(u);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m; cin >> n >> m;
	vector<pair<int,int>> adjList[n+1];
	vector<bool> seen(m,false);
	vector<int> in_degree(n+1,0);
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		adjList[u].push_back({v,i});
		adjList[v].push_back({u,i});
		in_degree[u]++;
		in_degree[v]++;
	}
	for (int i = 1;i <= n; i++) {
		if (in_degree[i] % 2) {
			cout << "IMPOSSIBLE";
			return 0;
		}
	}
	DFS(adjList,seen,1);
	if (paths.size() != m+1) {
		cout << "IMPOSSIBLE";
		return 0;
	} else {
		for (int vl : paths) cout << vl << " ";
	}
	return 0;
}
