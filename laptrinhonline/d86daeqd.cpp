#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b; cin >> a >> b;
	int res = min(a/4,b/4);
	a -= res*4;
	b -= res*4;
	res *= 2;
	if ((a >= 3 && b >= 1) || (b >= 3 && a >= 1)) res++;
	cout << res;
}
