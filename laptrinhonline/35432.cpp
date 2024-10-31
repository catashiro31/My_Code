#include <bits/stdc++.h>
using namespace std;
long in(string xau) {
	long kq= 0;
	for (int i = xau.length()-1; i >= 0; i--) {
		kq += (xau[i]-48)*pow(10,xau.length()-1-i);
	}
	return kq;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string a, b; cin >> a >> b;
	long tmpa_b = in(a), tmpb_b = in(b);
	string tmp =  to_string(tmpa_b+tmpb_b);
	tmp.erase(remove(tmp.begin(),tmp.end(),'0'),tmp.end());
	a.erase(remove(a.begin(),a.end(),'0'),a.end());
	b.erase(remove(b.begin(),b.end(),'0'),b.end());
	long tmpa_f = in(a), tmpb_f = in(b);
	if (tmp == to_string(tmpa_f+tmpb_f)) cout << "YES";
	else cout << "NO";
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
