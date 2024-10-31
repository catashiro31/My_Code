#include <bits/stdc++.h>
#define maxn 100005
using namespace std;

int n, m;
vector<int> adjList[maxn];
int color[maxn];

void DFS(int u, int mau) {
    if (color[u]) {
        if (color[u] != mau) {
            cout << "IMPOSSIBLE\n";
            exit(0);
        }
        return;
    }
    color[u] = mau;
    for (int v : adjList[u]) {
        DFS(v, 3 - mau);  // Chuyển sang màu đối lập (1 -> 2, 2 -> 1)
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    // Đọc danh sách cạnh
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);  // Thêm cạnh ngược lại cho đồ thị vô hướng
    }

    // Tô màu từng thành phần liên thông
    for (int i = 1; i <= n; i++) {
        if (color[i] == 0) DFS(i, 1);  // Nếu đỉnh chưa được tô màu thì bắt đầu DFS từ đó
    }

    // In ra kết quả nếu tô màu thành công
    for (int i = 1; i <= n; i++) {
        cout << color[i] << " ";
    }
    cout << '\n';

    return 0;
}
