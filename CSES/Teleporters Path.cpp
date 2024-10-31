#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, m; 
bool Find_Euler_Cycle(vector<pair<int,int>> adjList[], int start) {
	vector<int> kq;
	vector<bool> visited(m+1,false);
	stack<int> st;
	st.push(start);
	while (!st.empty()) {
		int u = st.top();
		if (!adjList[u].empty()) {
			int v = adjList[u].back().first;
			int pos = adjList[u].back().second;
			adjList[u].pop_back();
			if (visited[pos]) continue;
			visited[pos] = true;
			st.push(v);
		} else {
			kq.push_back(u);
			st.pop();
		}
	}	
	if (kq.size() != m+1) return false;
	else {
		reverse(kq.begin(),kq.end());
		for (int x : kq) cout << x << " ";
		return true;
	}
	return true;
}
bool check(vector<int> in_deg, vector<pair<int,int>> adjList[]) {
	if (adjList[1].size() != in_deg[1]+1 || adjList[n].size() != in_deg[n]-1) return false;
	for (int i = 2; i < n; i++) {
		if (adjList[i].size() != in_deg[i]) return false;
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	vector<pair<int,int>> adjList[n+1];
	vector<int> in_deg(n+1,0);
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		adjList[u].push_back({v,i});
		in_deg[v]++;
	}
	if (!check(in_deg,adjList)) {
		cout << "IMPOSSIBLE";
		return 0;
	}
	if (Find_Euler_Cycle(adjList,1)) return 0;
	else cout << "IMPOSSIBLE";
	return 0;
}