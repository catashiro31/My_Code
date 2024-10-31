#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	set<int> st;
	map<int,int> sl;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		st.insert(x);
		sl[x]++;
	}
	long kq = 0;
	for (int x : st) {
		int tmp = sl[x];
		kq += 1L*tmp*(tmp-1)/2;
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
