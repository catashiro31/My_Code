#include <bits/stdc++.h>
using namespace std;
map<int,int> parent;
void BFS(vector<int> adjList[],vector<int> &visited, int start, int finish) {
	queue<int> q;
	q.push(start);
	visited[start] = 1;
	while (!q.empty()) {
		int now = q.front(); q.pop();
		for (int v : adjList[now]) {
			if (!visited[v]) {
				visited[v] = visited[now]+1;
				q.push(v);
				parent[v] = now;
			}
		}
	}
	int n = finish;
	if (visited[n]) {
		cout << visited[n] << '\n';
		vector<int> kq;
		while (n) {
			kq.push_back(n);
			n = parent[n];
		}
		reverse(kq.begin(),kq.end());
		for (int x : kq) cout << x << " ";
	} else cout << "IMPOSSIBLE";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m; cin >> n >> m;
	vector<int> adjList[n+1];
	for (int i = 1; i <= m; i++) {
		int u, v; cin >> u >> v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	} 
	vector<int> visited(n+1,0);
	BFS(adjList,visited,1,n);
}
