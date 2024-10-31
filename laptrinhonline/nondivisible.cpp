#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k; cin >> n >> k;
	long arr[n];
	for (long &x : arr) cin >> x;
	vector<int> sl(k,0);
	for (long x : arr) sl[x%k]++;
	int kq = 0;
	for (int i = 0; i <= k/2; i++) {
		if (i == 0 && sl[i] != 0) kq++;
		else if (k % 2 != 0) {
			kq += max(sl[i],sl[k-i]);
		} else {
			if (i == k/2) kq++;
			else kq += max(sl[i],sl[k-i]);
		}
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
