#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	inFile.close();
	for (int i = 1; i <= n; i++) {
		if (i%2 == 1) cout << i << '\n';
		else {
			cout << 'L';
			if (i%4 == 0) cout << 'T';
			if (i%8 == 0) cout << 'O';
			if (i%16 == 0) cout << 'L';
			cout << '\n';
		}
	}
}
