#include <bits/stdc++.h>
#define maxn 10005
using namespace std;

int n, m;
int dx[] = {-1, 1, 0, 0};  // U, D, L, R
int dy[] = {0, 0, -1, 1};
int pre[maxn][maxn];  // Lưu lại hướng đi
string dir = "UDLR";  // Hướng đi tương ứng: Up, Down, Left, Right

void BFS(vector<vector<char>>& Matrix, vector<vector<int>>& Visited, pair<int,int> start, pair<int,int>& finish) {
    queue<pair<int,int>> q;
    q.push(start);
    Visited[start.first][start.second] = 1;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int u = x + dx[i];
            int v = y + dy[i];
            
            // Kiểm tra biên và nếu là đường đi thì tiếp tục
            if (u >= 0 && u < n && v >= 0 && v < m && Matrix[u][v] != '#' && !Visited[u][v]) {
                q.push({u, v});
                Visited[u][v] = 1;
                pre[u][v] = i;  // Lưu hướng đi để sau này truy vết
            }
        }
    }
    
    // Nếu đích `B` đã được thăm
    if (Visited[finish.first][finish.second]) {
        cout << "YES" << '\n';
        string ans = "";
        
        // Truy vết từ đích về xuất phát
        while (finish != start) {
            int i = pre[finish.first][finish.second];
            ans += dir[i];  // Thêm hướng đi vào chuỗi kết quả
            finish.first -= dx[i];
            finish.second -= dy[i];
        }
        
        reverse(ans.begin(), ans.end());  // Đảo chuỗi để in từ `A` đến `B`
        cout << ans.size() << '\n';  // In độ dài đường đi
        cout << ans;  // In đường đi
    } else {
        cout << "NO";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    vector<vector<char>> Matrix(n, vector<char>(m));
    vector<vector<int>> Visited(n, vector<int>(m, 0));
    pair<int,int> start, finish;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> Matrix[i][j];
            if (Matrix[i][j] == 'A') {
                start = {i, j};
            }
            if (Matrix[i][j] == 'B') {
                finish = {i, j};
            }
        }
    }
    
    BFS(Matrix, Visited, start, finish);
}
