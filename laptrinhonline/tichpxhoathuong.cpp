#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string xau; cin >> xau;
	cout << xau << '\n';
	for (char x : xau) {
		if (islower(x)) cout << (char)toupper(x);
		else if (isupper(x)) cout << (char)tolower(x);
	}
	cout << '\n';
	for (char x : xau) cout << (char)toupper(x);
	cout << '\n';
	for (char x : xau) cout << (char)tolower(x);
	cout << '\n';
	for (char x : xau) {
		if (x == 'e' || x == 'a' || x == 'i' || x == 'o' || x == 'u') cout << x;
		else if (x == 'E' || x == 'A' || x == 'I' || x == 'O' || x == 'U') cout << (char)tolower(x);
		else cout << (char)toupper(x);  
	}
	cout << '\n';
	for (int i = 0; i < xau.length(); i++) {
		if (i % 2 == 0) cout << (char)toupper(xau[i]);
		else cout << (char)tolower(xau[i]); 
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
