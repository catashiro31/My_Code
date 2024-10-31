#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	string xau; inFile >> xau;
	inFile.close();
	set<string> kq;
	for (int i = 1; i <= xau.length(); i++) {
		for (int j = 0; j <= xau.length()-i; j++) {
			kq.insert(xau.substr(j,i));
		}
	}
	for (string x : kq) cout << x << '\n';
}
