#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string xau; cin >> xau;
	int i = 1;
	string check = "";
	while (check != xau) {
		check = to_string(i) + check;
		i++;
	}
	cout << i-1;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
