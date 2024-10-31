#include <bits/stdc++.h>
#define maxn 10000
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		long x, y; cin >> x >> y;
		long z = max(x,y);
		long long pos = 1 + 1LL*(z-1)*z*(z+1)/3;
		if (z % 2 == 0) {
			if (y == z) cout << pos-z+x;
			else cout << pos+z-y;
		} else {
			if (y == z) cout << pos+z-x;
			else cout << pos-z+y;
		}
		cout << '\n';
	}
}
