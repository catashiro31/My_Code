#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int k2, k3, k5, k6; inFile >> k2 >> k3 >> k5 >> k6;
	inFile.close();
	long long kq = 0;
	if (k2 != 0) {
		kq += 1LL*min(min(k2,k5),k6)*256;
		k2 -= min(min(k2,k5),k6);
		k5 -= min(min(k2,k5),k6);
		k6 -= min(min(k2,k5),k6);
	}
	if (k2 != 0) kq += 1LL*min(k2,k3)*32;
	cout << kq;
}
