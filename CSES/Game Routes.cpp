#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
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
	vector<int> topo_sort;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		topo_sort.push_back(u);
		for (int v : adjList[u]) {
			in[v]--;
			if (!in[v]) q.push(v);
		}
	}
	vector<long long> dp(n+1,0);
	dp[1] = 1;
	for (int u : topo_sort) {
		if (!dp[u]) continue;
		for (int v : adjList[u]) dp[v] = (dp[v]+dp[u])%mod;
	}
	cout << dp[n];
	return 0;
}
