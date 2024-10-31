#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string xau; cin >> xau;
		int j = xau.length()-1;
		while (xau[j] != '1' && j > -1) j--;
		cout << j << '\n';
	}
}
