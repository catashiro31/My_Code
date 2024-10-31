#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int s, m; cin >> s >> m;
	if ((s-m) % 2 == 0 && (s+m) % 2 == 0) cout << (s+m)/2 << " " << (s-m)/2;
	else cout << -1;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
