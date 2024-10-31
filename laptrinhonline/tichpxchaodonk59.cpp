#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int arr[n];
	for (int &x : arr) cin >> x;
	stack<int> st_x;
	vector<int> next_x(n,-1);
	stack<int> st_n;
	vector<int> next_n(n,-1);
	for (int i = 0; i < n; i++) {
		while (!st_x.empty() && arr[st_x.top()] < arr[i]) {
			next_x[st_x.top()] = i;
			st_x.pop();
		}
		st_x.push(i);
	}
	for (int i = n-1; i >= 0; i--) {
		while (!st_n.empty() && arr[st_n.top()] < arr[i]) {
			next_n[st_n.top()] = i;
			st_n.pop();
		}
		st_n.push(i);
	}
	for (int i = 0; i < n; i++) {
		if (next_x[i] == -1 && next_n[i] == -1) cout << -1 << " ";
		else if (next_x[i] == -1 && next_n[i] != -1) cout << next_n[i] << " ";
		else if (next_x[i] != -1 && next_n[i] == -1) cout << next_x[i] << " ";
		else {
			if (abs(next_x[i]-i) > abs(next_n[i]-i)) cout << next_n[i] << " ";
			else if (abs(next_x[i]-i) < abs(next_n[i]-i)) cout << next_x[i] << " ";
			else cout << next_n[i] << " "; 
		}
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
