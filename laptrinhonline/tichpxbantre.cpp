#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,k; cin >> n >> k;
	int a[n];
	for (int &x : a) cin >> x;
	long long kq = 0;
	for (int x : a) {
		kq += x - x%k;
	}
	cout << 1LL*3*kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
