#include <bits/stdc++.h>
using namespace std;
void DFS1(vector<int> adjList[], vector<bool> &visited, int u, stack<int> &st) {
	visited[u] = true;
	for (int v : adjList[u]) {
		if (!visited[v]) DFS1(adjList, visited, v, st);
	}
	st.push(u);
}
void DFS2(vector<int> TadjList[], vector<int> &seen, int u, int ccount) {
	seen[u] = ccount;
	for (int v : TadjList[u]) {
		if (seen[v] == -1) DFS2(TadjList,seen,v,ccount);
	}
}
long long DP(int i, vector<int> group, vector<int> rgraph[], vector<int> &dp) {
    if (dp[i]) return dp[i];
    dp[i] = group[i];
    for (int j : rgraph[i]) {
        dp[i] = max(dp[i], DP(j) + group[i]);
    }
    return dp[i];
}
long long DP(int u,vector<int> rgraph[], vector<long long> &dp, vector<long long> group) {
	long long kq = LLONG_MIN;
	for (int v : rgraph[u]) {
		kq = max(kq,dp(v))
	}
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n, m; cin >> n >> m;
	vector<long> coins(n);
	for (long &vl : coins) cin >> vl;
	vector<int> adjList[n];
	vector<int> TadjList[n];
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		adjList[u-1].push_back(v-1);
		TadjList[v-1].push_back(u-1);
	}
	vector<bool> visited(n,false);
	stack<int> st;
	for (int i = 0; i < n; i++) {
		if (!visited[i]) DFS1(adjList,visited,i,st);
	}
	vector<int> seen(n,0);
	int ccount = 0;
	while (!st.empty()) {
		int u = st.top(); st.pop();
		if (seen[u]) continue;
		DFS2(TadjList,seen,u,ccount);
		ccount++;
	}
	vector<long long> group(ccount,0);
	for (int i = 0; i < n; i++) {
		group[seen[i]] += coins[i];
	}
	vector<int> rgraph[ccount];
	for (int u = 0; u < n; u++) {
		for (int v : adjList[u]) {
			if (seen[u] != seen[v]) {
				rgraph[seen[v]].push_back(seen[u]);
			}
		}
	}
	long long kq = LLONG_MIN;
	vector<long long> dp(ccount,0);	
	for (int i = 0; i < ccount; i++) {
		if (dp[i]) continue;
		dp[i] = group[i];
		for (int v : rgraph[i]);
		dp[i] = max(dp[i],DP(i);
	}
	cout << kq;
}

