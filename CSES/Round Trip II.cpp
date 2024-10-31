#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
map<int, int> prv;
vector<int> result; 
vector<bool> visited, on_stack;
bool Cycle(int u, vector<int> adjList[]) {
    visited[u] = true;
    on_stack[u] = true;
    for (int v : adjList[u]) {
        if (!visited[v]) {
            prv[v] = u; 
            if (Cycle(v, adjList)) return true;
        } else if (on_stack[v]) { 
            result.push_back(v);
            int x = u;
            while (x != v) {
                result.push_back(x);
                x = prv[x];
            }
            result.push_back(v);
            reverse(result.begin(), result.end());
            return true;
        }
    }
    on_stack[u] = false;
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; 
    cin >> n >> m;
    vector<int> adjList[n + 1];
    visited.assign(n + 1, false);
    on_stack.assign(n + 1, false);
    for (int i = 0; i < m; i++) {
        int u, v; 
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i] && Cycle(i, adjList)) {
            cout << result.size() << endl;
            for (int x : result) cout << x << " ";
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}

