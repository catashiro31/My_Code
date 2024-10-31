#include <bits/stdc++.h>
using namespace std;
int n, m, k; 
void BFS() {
	map<pair<int,int>,int> v;
	queue<pair<int,int>> q;
	q.push({0,0});
	v[{0,0}] = 0;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		if (x == k || y == k) {
			cout << v[{x,y}]-1;
			return;
		}
		int z = x + y;
		q.pop();
		pair<int,int> change[] = {{0,y},{x,0},{max(0,z-m),min(z,m)},{min(z,n),max(0,z-n)},{n,y},{x,m}};
		for (int i = 0; i < 6; i++) {
			if (v[change[i]]) continue;
			else {
				v[change[i]] = v[{x,y}]+1;
				q.push(change[i]);
			}
		}
	}
	cout << "Khong dong duoc nuoc";
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m >> k;
	BFS();
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
