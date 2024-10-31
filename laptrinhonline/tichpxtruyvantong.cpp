#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);	
	int n, m; cin >> n >> m;
	long prefixsum[n];
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (i == 0) prefixsum[i] = x;
		else prefixsum[i] = prefixsum[i-1]+x;
	}
	while (m--) {
		int L,R; cin >> L >> R;
		if (L == 1) cout << prefixsum[R-1] << '\n';
		else cout << prefixsum[R-1]-prefixsum[L-2] << '\n';
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
