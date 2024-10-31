#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,m; cin >> n >> m;
	int size = log2(n);
	int spt[n][size+1];
	for (int i = 0; i < n; i++) cin >> spt[i][0];
	for (int i = 1; i <= size; i++) {
		for (int j = 0; j + (1<<i) <= n; j++) {
			spt[j][i] = max(spt[j][i-1],spt[j+(1<<(i-1))][i-1]);
		}
	}
	while (m--) {
		int L,R; cin >> L >> R;
		int len = log2(R-L+1);
		cout << max(spt[L-1][len],spt[R-(1<<len)][len]) << '\n';
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
