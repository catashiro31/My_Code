#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m; cin >> n >> m;
	int a[n];
	for (int &x : a) cin >> x;
	int b[m];
	for (int &x : b) cin >> x;
	sort(a,a+n,greater<int>()); sort(b,b+m,greater<int>());
	int i = 0, j = 0;
	int kq = 0;
	while (i < n && j < m) {
		if (a[i] == b[j]) {
			kq++;
			i++; j++;
		} else {
			if (a[i] > b[j]) i++;
			else j++;
		}
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
