#include <bits/stdc++.h>
using namespace std;
string Cong(string a, string b) {
	while (a.length() > b.length()) {
		b = '0'+b;
	}
	while (a.length() < b.length()) {
		a = '0'+a;
	}
	string c = a;
	int dem,plus = 0;
	for (int i = a.length()-1; i >= 0; i--) {
		dem = (int(a[i]) + int(b[i]) - 96 + plus)%10;
		plus = int((int(a[i])+ int(b[i]) - 96 + plus)/10);
		c[i] = char(dem + 48);
	}
	if (plus != 0) {
		c = '1'+c;
	}
	return c;
}
string Tich(string a, string b) {
	string c="0";
	string dem;
	for (int i = b.length()-1; i >= 0; i--) {
		if (int(b[i]) != 48) {
			for (int j = 0; j < int(b[i])-48; j++) {
				dem = Cong(dem,a);
			}
		}
		for (int k = 0; k < b.length()-1-i; k++) {
			dem = dem +'0';
		}
		c = Cong(dem,c);
		dem = "0";
	} 
	return c;
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	inFile.close();
	string kq = "1";
	for (int i = 1; i <= n; i++) {
		kq = Tich(kq,to_string(i));
	}
	cout << kq;
}
