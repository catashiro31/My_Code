#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	long long a, c;
	inFile >> a >> c;
	inFile.close();
	string xaua = "";
	string xauc = "";
	while (a != 0) {
		xaua = to_string(a%3) + xaua;
		a/=3;
	}
	while (c != 0) {
		xauc = to_string(c%3) + xauc;
		c/=3;
	}
	string xaub = "";
	while (xaua.length() < xauc.length()) xaua = "0" + xaua;
	while (xauc.length() < xaua.length()) xauc = "0" + xauc;
	for (int i = xaua.length()-1; i >= 0; i--) {
		if (xaua[i] <= xauc[i]) xaub = to_string(xauc[i]-xaua[i]) + xaub;
		else xaub = to_string(xauc[i]-xaua[i]+3) + xaub;
	}
	while (xaub[0] == '0') xaub.erase(0,1);
	long long b = 0;
	for (int i = 0; i < xaub.length(); i++) {
		b = b*3 + xaub[i]-48;
	}
	cout << b;
}
