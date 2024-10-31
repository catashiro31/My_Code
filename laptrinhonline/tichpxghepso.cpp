#include <bits/stdc++.h>
using namespace std;
bool sosanh(string a, string b) {
	char a_c = a[a.size()-1], b_c = b[b.size()-1];
	while (a.length() < b.length()) a+= a_c;
	while (b.length() < a.length()) b += b_c;
	return a >= b; 
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string a,b,c; cin >> a >> b >> c;
	if (sosanh(a,b) && sosanh(a,c)) {
		if (sosanh(b,c)) cout << a << b << c;
		else cout << a << c << b;
	} else if (sosanh(b,a) && sosanh(b,c)) {
		if (sosanh(a,c)) cout << b << a << c;
		else cout << b << c << a;
	} else {
		if (sosanh(b,a)) cout << c << b << a;
		else cout << c << a << b;
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
