#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string xau; cin >> xau;
	int cmax = 1;
	int tmp1 = 1;
	char tmp2 = xau[0];
	for (int i = 1; i < xau.size(); i++) {
		if (xau[i] == xau[i-1]) {
			tmp1++;
			cmax = max(tmp1,cmax);
		} else {
			tmp2 = xau[i];
			tmp1 = 1;
		}
	}
	cout << cmax;
}
