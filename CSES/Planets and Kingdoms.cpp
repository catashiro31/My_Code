#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;
int n, m;
int tmp = 0;
void DFS1(vector<int> adjList[], vector<bool> &visited, int u, stack<int> &st) {
	visited[u] = true;
	for (int v : adjList[u]) {
		if (!visited[v]) DFS1(adjList,visited,v,st);
	}
	st.push(u);
}
void DFS2(vector<int> TadjList[], vector<int> &seen, int u) {
	seen[u] = tmp;
	for (int v : TadjList[u]) {
		if (!seen[v]) DFS2(TadjList,seen,v);
	}
}
void Kosaraju(vector<int> adjList[], vector<int> TadjList[]) {
	vector<bool> visited(n+1,false);
	stack<int> st;
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) DFS1(adjList,visited,i,st);
	}
	vector<int> seen(n+1,0);
	while (!st.empty()) {
		int u = st.top(); st.pop();
		if (seen[u]) continue;
		tmp++;
		DFS2(TadjList,seen,u);
	}
	cout << tmp << endl;
	for (int i = 1; i <= n; i++) cout << seen[i] << " ";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	vector<int> adjList[n+1];
	vector<int> TadjList[n+1];
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		adjList[u].push_back(v);
		TadjList[v].push_back(u);
	}
	Kosaraju(adjList,TadjList);
	return 0;
}
