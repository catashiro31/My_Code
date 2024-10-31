#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	long n; inFile >> n;
	inFile.close();
	long menhgia[9] = {1000,2000,5000,10000,20000,50000,100000,200000,500000};
	int i = 8;
	int ccount = 0;
	while (n > 0 and i >= 0) {
		if (n >= menhgia[i]) {
			ccount++;
			n -= menhgia[i];
		} else i--;
	}
	if (i < 0) cout << -1;
	else cout << ccount;
}
