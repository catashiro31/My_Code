#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string xau; cin >> xau;
	long long count_O = 0, count_OA = 0, count_OAO = 0;
	for (char x : xau) {
		if (x == 'O') {
			count_OAO += count_OA;
			count_O++;
		} else if(x == 'A') {
			count_OA += count_O;
		}
	}
	cout << count_OAO;
}
