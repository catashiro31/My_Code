#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string X; cin >> X;
	map<char,int> sl;
	for (char x : X) {
		sl[x]++;
	}
	for (int i = 'a'; i <= 'z'; i++) {
		if (sl[i] == 0) cout << (char)i;
	}
}
