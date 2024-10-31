#include <bits/stdc++.h>
using namespace std;
int n;
int k, m;
int s, f;
int kq = INT_MAX;
bool c[301];
int ccount = 0;
int BFS(int s) {
	queue<int> q;
	vector<int> dis(n+1);
	q.push(s);
	dis[s] = 0;
	while (!q.empty()) {
		int x = q.front(); q.pop();
		if (x == f) return dis[x];
		if (c[x] == true) continue;
		else c[x] = true;
		if (x + k <= n) {
			dis[x+k] = dis[x]+1;
			q.push(x+k);
		}
		if (x - m >= 1) {
			dis[x-m] = dis[x]+1;
			q.push(x-m);
		}
	}
	return -1;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	cin >> k >> m;
	cin >> s >> f;
	memset(c,false,sizeof(c));
	cout << BFS(s);
}
