#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;
void DFS1(vector<int> adjList[], vector<bool> &visited, int u, stack<int> &st) {
    visited[u] = true;
    for (int v : adjList[u]) {
        if (!visited[v]) DFS1(adjList, visited, v, st);
    }
    st.push(u);
}
void DFS2(vector<int> TadjList[], vector<int> &SCC, int u, int tmp) {
    SCC[u] = tmp;
    for (int v : TadjList[u]) {
        if (SCC[v] == -1) DFS2(TadjList, SCC, v, tmp);
    }
}
int DP(vector<unordered_set<int>> &DAG_SCC, int u, vector<int> &dp, const vector<int> &Plink) {
    if (dp[u] != -1) return dp[u];
    dp[u] = Plink[u];
    for (int v : DAG_SCC[u]) {
        dp[u] += DP(DAG_SCC, v, dp, Plink);
    }
    return dp[u];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; 
    cin >> n >> m;
    vector<int> adjList[n], TadjList[n];
    for (int i = 0; i < m; i++) {
        int u, v; 
        cin >> u >> v;
        adjList[u - 1].push_back(v - 1);
        TadjList[v - 1].push_back(u - 1);
    }
    vector<bool> visited(n, false);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) DFS1(adjList, visited, i, st);
    } 
    vector<int> SCC(n, -1);
    int tmp = 0;
    while (!st.empty()) {
        int u = st.top(); 
        st.pop();
        if (SCC[u] == -1) {
            DFS2(TadjList, SCC, u, tmp);
            tmp++;
        }
    }
    vector<unordered_set<int>> DAG_SCC(tmp);
    for (int u = 0; u < n; u++) {
        for (int v : adjList[u]) {
            if (SCC[u] != SCC[v]) {
                DAG_SCC[SCC[u]].insert(SCC[v]);
            }
        }
    }
    vector<int> Plink(tmp, 0);
    for (int i = 0; i < n; i++) {
        Plink[SCC[i]]++;
    }
    vector<int> dp(tmp, -1);
    for (int i = 0; i < tmp; i++) {
        if (dp[i] == -1) DP(DAG_SCC, i, dp, Plink);
    }
    for (int i = 0; i < n; i++) {
        cout << dp[SCC[i]] - 1 << endl;
    }
    return 0;
}
