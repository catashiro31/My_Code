#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	long k; inFile >> k;
	inFile.close();
	if (k % (n-1) == 0) {
		cout << n*(k/(n-1)-1) + (n-1);
	} else cout << n*(k/(n-1)) + (k%(n-1));
}
