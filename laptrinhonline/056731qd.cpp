#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long a, b; cin >> a >> b;
	long long cmax = LLONG_MAX;
	long long cmin = LLONG_MIN;
	if ((a <= 0 && b >= 0) || (b <= 0 && a >= 0)) cout << a+b;
	else {
		if (a <= 0 && b <= 0) {
			if (b < cmin-a) cout << "OVERFLOW";
			else cout << a+b;
		} else if (a >= 0 && b >= 0) {
			if (b > cmax-a) cout << "OVERFLOW";
			else cout << a+b;
		}
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
