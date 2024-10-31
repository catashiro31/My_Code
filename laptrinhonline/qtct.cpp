#include <bits/stdc++.h>
using namespace std;
int kq = INT_MAX;  
char pos;     
void BFS(int x_st, int y_st, int x_fn, int y_fn, char cr) {
    queue<tuple<int, int, int>> q;
    q.push(make_tuple(x_st, y_st, 0));  
    vector<vector<bool>> check(10, vector<bool>(9, false));
    check[x_st][y_st] = true;
    while (!q.empty()) {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int ccount = get<2>(q.front());
        q.pop();
        if (x == x_fn && y == y_fn) {
            if (ccount < kq) {
                kq = ccount;
                pos = cr;
            }
            continue; 
        }
        if (x + 1 < 10 && !check[x + 1][y]) {
            q.push(make_tuple(x + 1, y, ccount + 1));
            check[x + 1][y] = true;
        }
        if (x >= 5) {  
            if (y - 1 >= 0 && !check[x][y - 1]) {  
                q.push(make_tuple(x, y - 1, ccount + 1));
                check[x][y - 1] = true;
            }
            if (y + 1 < 9 && !check[x][y + 1]) { 
                q.push(make_tuple(x, y + 1, ccount + 1));
                check[x][y + 1] = true;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x_fn, y_fn; 
    cin >> x_fn >> y_fn;
    tuple<int, int, char> start[5] = {
        make_tuple(3, 0, 'A'),
        make_tuple(3, 2, 'B'),
        make_tuple(3, 4, 'C'),
        make_tuple(3, 6, 'D'),
        make_tuple(3, 8, 'E')
    };
    for (auto &s : start) {
        BFS(get<0>(s), get<1>(s), x_fn, y_fn, get<2>(s));
    }
    if (kq != INT_MAX) {
        cout << kq << '\n' << pos << '\n';
    } else {
        cout << -1 << '\n'; 
    }
    return 0;
}
