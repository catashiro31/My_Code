#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int t; inFile >> t;
	string xau; inFile >> xau;
	inFile.close();
	int ccount1 = 0, ccount2 = 0;
	for (int i = 0; i < xau.length(); i++) {
		if (xau[i] == '1') ccount1++;
		else ccount2++;
	}
	int pos1=1, pos0=0;
	for (int i = 0; i < t; i++) {
		if (ccount1 % 2 == 1) {
			pos1 = 1 - pos1;
			pos0 = 1 - pos0;
			swap(ccount1,ccount2);
		} 
	}
	if (pos1 == 1 and pos0 == 0) {
		cout << xau;
	} else {
		for (int i = 0; i < xau.length(); i++) {
			if (xau[i] == '1') cout << '0';
			else cout << '1';
		}
	}
}
