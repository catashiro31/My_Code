#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long X, Y; cin >> X >> Y;
	if (X > Y) swap(X,Y);
	if (X % 2 == 0) X = X + 1;
	else X = X + 2;
	if (Y % 2 == 0) Y = Y - 1;
	else Y = Y - 2;
	cout << 1LL*((Y-X)/2+1)*(Y+X)/2;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
