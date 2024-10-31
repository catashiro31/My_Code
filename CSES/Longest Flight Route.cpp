#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m; cin >> n >> m;
	vector<int> in(n+1,0);
	vector<int> adjList[n+1];
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		adjList[u].push_back(v);
		in[v]++;
	}
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (!in[i]) q.push(i);
	}
	vector<int> topo_sort;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		topo_sort.push_back(u);
		for (int v : adjList[u]) {
			in[v]--;
			if (!in[v]) q.push(v);
		}
	}
	vector<int> disct(n+1,-1);
	map<int,int> parent;
	disct[1] =1;
	for (int i = 1; i <= n; i++) {
		int u = topo_sort[i-1];
		if (disct[u] == -1) continue;
		for (int v : adjList[u]) {
			if (disct[u]+1 > disct[v]) {
				disct[v] = disct[u]+1;
				parent[v] = u;
			}
		}
	}
	if (disct[n] != -1) {
		cout << disct[n] << endl;
		int pos = n;
		vector<int> kq;
		while (pos != 0) {
			kq.push_back(pos);
			pos = parent[pos];
		}
		reverse(kq.begin(), kq.end());
		for (int vl : kq) cout << vl << " ";
	} else cout << "IMPOSSIBLE";
	return 0;
}
