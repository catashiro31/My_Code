#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
map<int, int> prv;
bool DFS(int u, vector<int> adjList[], vector<bool> &visited) {
    visited[u] = true;
    for (int v : adjList[u]) {
        if (!visited[v]) {
            prv[v] = u;
            if (DFS(v, adjList, visited)) return true;
        } else if (v != prv[u]) {
            vector<int> kq;
            kq.push_back(v);
            int x = u;
            while (x != v) {
                kq.push_back(x);
                x = prv[x];
            }
            kq.push_back(v);
            reverse(kq.begin(), kq.end());
            cout << kq.size() << endl;
            for (int vl : kq) cout << vl << " ";
            return true;
        }
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; 
    cin >> n >> m;
    vector<int> adjList[n + 1];
    for (int i = 0; i < m; i++) {
        int u, v; 
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    vector<bool> visited(n + 1, false);
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (DFS(i, adjList, visited)) return 0;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}

