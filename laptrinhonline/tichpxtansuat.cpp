#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	set<int> st;
	map<int,int> sl;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		sl[x]++;
		st.insert(x);
	}
	for (int x : st) {
		cout << x << " " << sl[x] << '\n'; 
	}
}
