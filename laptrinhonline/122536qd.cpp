#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for (int i = 0; i < t; ++i) {
		int n; cin >> n;
		double res = 0;
		for (int j = 0; j < n; ++j) {
			int a, b;
			cin >> a >> b;
			res += a*1.0/b; 
		}
		if (res == 1) cout << "YES";
		else cout << "NO";
	}
}
