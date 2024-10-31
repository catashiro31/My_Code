#include <bits/stdc++.h>
using namespace std;
int kq = 0;
void Find(int n, int k) {
	if ( n - k < 2 || (n-k) % 2 == 1) {
		kq++;
		return;
	}
	Find((n-k)/2,k);
	Find((n+k)/2,k);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,k; cin >> n >> k;
	if (n >= k) Find(n,k);
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
