#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,q; cin >> n >> q;
	long arr[n];
	for (long &x : arr) cin >> x;
	stack<int> st_x;
	int down_l[n];
	stack<int> st_n;
	int down_r[n];
	for (int i = 0; i < n; i++) {
		while (!st_x.empty() && arr[st_x.top()] < arr[i]) st_x.pop();
		down_l[i] = st_x.size();
		st_x.push(i);
		while (!st_n.empty() && arr[st_n.top()] < arr[n-1-i]) st_n.pop();
		down_r[n-1-i] = st_n.size();
		st_n.push(n-1-i);
	}
//	for (int x : down_l) cout << x << " "; 
//	cout << '\n';
//	for (int x : down_r) cout << x << " ";
	
	while (q != 0) {
		int x; cin >> x;
		cout << down_l[x-1]+down_r[x-1] << '\n';
		q--;
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
