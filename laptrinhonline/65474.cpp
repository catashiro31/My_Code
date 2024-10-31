#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int k, n, m; cin >> k >> n >> m;
	int nha[k];
	for (int &x : nha) cin >> x;
	vector<vector<int>> adjList(n+1);
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		adjList[u].push_back(v);
	}
	vector<int> check(n+1,0);
	int kq = 0;
	for (int i = 0; i < k; i++) {
		vector<bool> sc(n+1,false);
		queue<int> q;
		q.push(nha[i]);
		sc[nha[i]] = true;
		while (!q.empty()) {
			int u = q.front(); q.pop();
			check[u]++;
			for (int v : adjList[u]) {
				if (!sc[v]) {
					sc[v] = true;
					q.push(v);
				}
			}
			kq = max(kq,check[u]);
		}
		for (int j = 1; j <= n; j++) {
			if (check[j] < kq) adjList[j].clear();
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << check[i]<< " ";
	}
	cout << kq;
}
