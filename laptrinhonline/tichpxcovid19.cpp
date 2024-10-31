#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vector<bool> infected(n + 1, false);
    int k;
    cin >> k;
    queue<int> q;
    for (int i = 0; i < k ;i++) {
    	int x; cin >> x;
    	infected[x] = true;
    	q.push(x);
	}
	int gen = 0;
	while (!q.empty()) {
		int size = q.size();
		cout << "F" << gen << ": " << size << '\n';
		gen++;
		for (int i = 0; i < size; i++) {
			int person = q.front(); q.pop();
			for (int neibour : adjList[person]) {
				if (!infected[neibour]) {
					infected[neibour] = true;
					q.push(neibour);
				}
			}
		}
	}
    return 0;
}

