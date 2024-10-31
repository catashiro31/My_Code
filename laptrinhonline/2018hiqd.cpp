#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y; cin >> x >> y;
	cout << x << " " << y;
	if (x == 5) cout << "D";
	else if (x == 1 || x == 3 || x == 7 || x == 9) {
		if (y == 5) cout << "D";
		else cout << "X";
	} else cout << "D";
}
