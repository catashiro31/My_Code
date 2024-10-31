#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	string xau; cin >> xau;
	char tmp = xau[0];
	string kq = "";
	kq += xau[0];
	for (int i = 1; i < n; i++) {
		if (xau[i] != tmp) {
			kq += xau[i];
			tmp = xau[i];
		}
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
