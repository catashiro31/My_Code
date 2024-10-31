#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b) {
	if (a == 0 || b == 0) return a+b;
	return GCD(b%a,a);
}
long in(string xau) {
	if (xau == "") return 0;
	long kq = 0;
	for (int i = xau.length()-1; i >= 0; i--) {
		kq += (xau[i]-48)*pow(10,xau.length()-1-i);
	}
	return kq;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string xau; cin >> xau;
	string xaua = "",xaub = "",xauc = "";
	int tmp = 0;
	for (char x: xau) {
		if (x == '.') {
			tmp++;
			continue;
		}
		if (x == '(') {
			tmp++;
			continue;
		}
		if (tmp == 0) {
			xaua += x;	
		} else if (tmp == 1) {
			xaub += x;
		} else if (x != ')') xauc+=x;
	}
	long a = in(xaua), b = in(xaub), c = in(xauc);
	long long tu = a*pow(10,xaub.length()+xauc.length()) + b*pow(10,xauc.length()) + c - a*pow(10,xaub.length()) - b;
	long long mau = pow(10,xaub.length())*(pow(10,xauc.length())-1);
	cout << tu/GCD(tu,mau) <<"/"<< mau/GCD(tu,mau);
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
