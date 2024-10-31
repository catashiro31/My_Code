#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long arr[n];
	for (long &x : arr) cin >> x;
	sort(arr,arr+n,greater<long>());
	long long kq = 0;
	for (int i = 2; i< n; i++) {
		kq += arr[1] - arr[i];
	}
	cout << kq;
}