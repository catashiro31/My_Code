#include <bits/stdc++.h>
using namespace std;
int bs(vector<int> a, int pos) {
	int L = 0, R = a.size()-1;
	int x = a[pos];
	while (L <= R) {
		int mid = (L+R)/2;
		if (a[mid] == x) return mid;
		if (a[mid] > x) R = mid-1;
		if (a[mid] < x) L = mid+1;
	}
	return -1;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector<int> arr(n), a(n);
	long prefixsum[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		a[i] = arr[i];
	}
	sort(a.begin(),a.end());
	for (int i = 0; i < n; i++) {
		if (i == 0) prefixsum[i] = a[i];
		else prefixsum[i] = prefixsum[i-1]+a[i];
	}
	int q; cin >> q;
	while (q--) {
		int pos; cin >> pos;
		int it = bs(a,pos);
		long act = (a[it]*it-prefixsum[it]) + (sum_up-a[it]*(n-it-1));
		cout << act << '\n'; 
	}
}
