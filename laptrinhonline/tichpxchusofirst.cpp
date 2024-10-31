#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while (t--) {
		int n,m; cin >> n >> m;
		int tmp = n%10;
		int kq = 1;
		for (int i = 0; i < m; i++) {
			kq = (kq*tmp)%10;
		}
		cout << tmp << '\n';
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
