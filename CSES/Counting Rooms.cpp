#include <iostream>
#include <vector>
using namespace std;
const int MAX_N = 1000; 
int n, m;
char adjMatrix[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int dx[] = {1, 0, -1, 0}; 
int dy[] = {0, 1, 0, -1};
void DFS(int i, int j) {
    visited[i][j] = true;
    for (int x = 0; x < 4; x++) {
        int ni = i + dx[x], nj = j + dy[x];
        if (ni >= 0 && ni < n && nj >= 0 && nj < m && !visited[ni][nj] && adjMatrix[ni][nj] == '.') {
            DFS(ni, nj);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> adjMatrix[i][j];
        }
    }
    int kq = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (adjMatrix[i][j] == '.' && !visited[i][j]) {
                kq++;
                DFS(i, j);
            }
        }
    }
    cout << kq << '\n';
    return 0;
}

