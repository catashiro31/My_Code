#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while (t != 0) {
		int x, y; cin >> x >> y;
		long kq = 0;
		for (int i = min(x,y)+1; i < max(x,y); i++) {
			if (i%2 == 1) kq += i;
		}
		cout << kq << '\n';
		t--;
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
