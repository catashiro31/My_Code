#include <bits/stdc++.h>
using namespace std;
void DFS(int u, vector<int> adjList[], vector<bool> &visited) {
	visited[u] = true;
	for (int v : adjList[u]) {
		if (!visited[v]) DFS(v,adjList,visited);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	freopen("input.txt","r",stdin);
	int n, m;
	cin >> n >> m;
	vector<int> adjList[n+1];
	for (int i = 0; i < m; i++) {
		int u,v; cin >> u >> v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
//	for (int i = 1; i <= n; i++) {
//		for (int x : adjList[i]) cout << x << " ";
//		cout << '\n';
//	}
	vector<bool> visited(n+1,false);
	vector<int> List;
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			List.push_back(i);
			DFS(i,adjList,visited);
		}
	}
	
	cout << List.size()-1 << '\n'; 
	for (int i = 0; i < List.size()-1; i++) cout << List[i] << " " << List[i+1] << '\n'; 
}
