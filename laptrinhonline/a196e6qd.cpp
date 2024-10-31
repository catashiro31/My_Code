#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long kq = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x != 1) kq+=x;
		if (x == 0) {
			kq = 0;
			break;
		}
	}
	cout << kq;
}
