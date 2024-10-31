#include <bits/stdc++.h>
using namespace std;
string xau;
set<string> kq;
vector<bool> check(14,true);
string tmp = "";
int csize;
void Try(int i) {
	if (i == csize) {
		kq.insert(tmp);
		return;
	}
	for (int j = 0; j < csize; j++) {
		if (check[j] == true) {
			check[j] = false;
			tmp += xau[j];
			Try(i+1);
			check[j] = true;
			tmp.pop_back();
		}
	}
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	inFile >> xau;
	inFile.close();
	csize = xau.length();
	Try(0);
	for (string x : kq) cout << x << endl;
}
