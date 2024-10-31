#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m; cin >> n >> m;
	vector<int> adjList[n+1];
	vector<int> in(n+1,0);
	for (int i = 0; i < m; i++) {
		int u,v; cin >> u >> v;
		adjList[u].push_back(v);
		in[v]++;
	}
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (!in[i]) q.push(i);
	}
	vector<int> kq;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		kq.push_back(u);
		for (int v : adjList[u]) {
			in[v]--;
			if (!in[v]) q.push(v);
		}
	}
	if (kq.size() == n)for (int x : kq) cout << x << " ";
	else cout << "IMPOSSIBLE";
} 
