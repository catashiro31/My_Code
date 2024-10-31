#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string xau; cin >> xau;
	int size = xau.length();
	vector<vector<int>> Matrix(26,vector<int> (size));
	for (int i = 0; i < 26; i++) {
		char cr = i+97;
		int ccount = 0;
		for (int j = 0; j < size; j++) {
			if (xau[j] == cr) {
				ccount ++;
				Matrix[i][j] = ccount;
			}else Matrix[i][j] = ccount;
		}
	}
	int q; cin >> q;
	while (q != 0) {
		int a, b; char c;
		cin >> a >> b >> c;
		if (a == 1) cout << Matrix[c-97][b-1] << " ";
		else cout << Matrix[c-97][b-1] - Matrix[c-97][a-2] << " ";
		q--; 
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
