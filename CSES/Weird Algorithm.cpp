#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n; cin >> n;
	vector<long> kq;
	while (n > 1) {
		kq.push_back(n);
		if (n % 2 == 1) n = 1LL*n*3+1;
		else n /= 2;
	}
	for (long x : kq) cout << x << " ";
	cout << 1;
}
