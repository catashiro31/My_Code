#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int x; inFile >> x;
	inFile.close();
	int ccount = 0;
	int tmp = 0;
	while (x > 0) {
		x -= ccount + 1 + tmp;
		tmp += ccount+1;
		ccount++;
	}
	if (x == 0) cout << ccount;
	else cout << ccount-1;
}
