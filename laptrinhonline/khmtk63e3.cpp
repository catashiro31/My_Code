#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, d;
	string s;
	cin >> n >> d;
	cin >> s;
	vector<bool> visited(n,false);
	queue<pair<int,int>> q;
	q.push({0,0});
	visited[0] = true;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int j = x+1; j <= min(n-1,x+d); j++) {
			if (!visited[j] && s[j] == '1') {
				if (j == n-1) {
					cout << y+1;
					return 0;
				}
				q.push({j,y+1});
				visited[j] = true;
			}
		}
	}
	cout << -1;
}
