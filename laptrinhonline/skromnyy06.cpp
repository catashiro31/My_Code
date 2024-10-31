#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;
void DFS(vector<int> adjList[], int u, int parent, vector<int> &disc, int ccount) {
	for (int v : adjList[u]) {
		if (v != parent) DFS(adjList,v,u,disc,ccount+1);
	}
	disc[u] = ccount;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector<int> adjList[n];
	for (int i = 0; i < n-1; i++) {
		int u, v; cin >> u >> v;
		adjList[u-1].push_back(v-1);
		adjList[v-1].push_back(u-1);
	}
	vector<int> disc1(n);
	DFS(adjList,0,-1,disc1,0);
	int node = max_element(disc1.begin(),disc1.end()) - disc1.begin();
	vector<int> disc2(n);
	DFS(adjList,node,-1,disc2,0);
	cout << *max_element(disc2.begin(),disc2.end());
	return 0;
}
