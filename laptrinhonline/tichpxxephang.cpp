#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	long arr[n];
	for (long &x : arr) cin >> x;
	long kq = 0;
	for (int i = 0; i < n; i++) {
		int j = i+1;
		while (j < n && arr[j] <= arr[i]) j++;
		if (j == n) kq--;
		kq += j-i;
//		cout << j-i << '\n';
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
