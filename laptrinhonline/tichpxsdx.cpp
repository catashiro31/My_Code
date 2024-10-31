#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string xau; cin >> xau;
	string tmp = "";
	for (int i = xau.length()-1; i >= 0; i--) tmp += xau[i];
	if (tmp == xau) cout << "YES";
	else cout << "NO";
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
