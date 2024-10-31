#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;
vector<int> path;
void DFS(vector<pair<int,int>> adjList[], int u, vector<bool> &edge, vector<int> &visited) {
	while (!adjList[u].empty()) {
		int v = adjList[u].back().first; 
		int pos = adjList[u].back().second;
		adjList[u].pop_back();
		if (edge[pos]) continue;
		edge[pos] = true;
		DFS(adjList,v,edge,visited);
	}
	path.push_back(u);
	visited[u]++;
	if (visited[u] == 2) {
		cout << u + 1 << " ";
		path.pop_back();
		while (path.back() != u) {
			cout << path.back() + 1 << " ";
			visited[path.back()]--;
			path.pop_back();
		}
		visited[u] = 1;
		cout << endl;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m; cin >> n >> m;
	vector<pair<int,int>> adjList[n];
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		adjList[u-1].push_back({v-1,i});
		adjList[v-1].push_back({u-1,i});
	}
	vector<bool> edge(m,false);
	vector<int> visited(n,0);
	DFS(adjList,0,edge,visited);
	return 0;
}