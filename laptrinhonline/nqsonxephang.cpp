#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	long arr[n];
	for (long &x : arr) cin >> x;
	vector<long> tmp(n,-1);
	stack<pair<long,int>> st;
	for (int i = 0; i < n; i++) {
		if (st.empty()) {
			st.push({arr[i],i});
		} else {
			if (st.top().first > arr[i]) st.push({arr[i],i});
			else {
				while (!st.empty() && st.top().first < arr[i]) {
					tmp[st.top().second] = arr[i];
					st.pop();
				}
				st.push({arr[i],i});
			}
		}
	}
	for (long x : tmp) cout << x << " ";
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
