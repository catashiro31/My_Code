#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector<vector<long>> arr(n,vector<long> (n));
	bool check = true;
	set<long> kq;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (i == j) {
				if (arr[i][j] != 0 && check) check = false; 
			} else {
				if (arr[i][j] != i+j+2 && check) check = false;
				if (arr[i][j] == i+j+2 && check) {
					kq.insert(i+1);
					kq.insert(j+1);
				}
			}
		}
	}
	if (kq.size() == n) {
		for (int x : kq) cout << x << " ";
	} else cout << -1;
}
