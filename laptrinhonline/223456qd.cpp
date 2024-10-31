#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string xau; cin >> xau;
	map<char,char> ax;
	for (int i = 'a'; i <= 'z'; i++) ax[i] = i;
	int q; cin >> q;
	while (q != 0) {
		char act; cin >> act;
		if (act == 'R') {
			char cr1, cr2; cin >> cr1 >> cr2;
			for (int i = 'a'; i <= 'z'; i++) {
				if (ax[i] == cr1) ax[i] = cr2;
			}
		} else {
			char cr; cin >> cr;
			for (int i = 'a'; i <= 'z'; i++) {
				if (ax[i] == cr) ax[i] = '~';
			}
		}
		q--;
	}
	for (char x : xau) {
		if (ax[x] != '~') cout << ax[x];
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}