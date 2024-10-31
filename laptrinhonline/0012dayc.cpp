#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	inFile.close();
	if (n <= 0) cout << "INVALID";
	else {
		if ((n%4 == 0 && n%100 != 0) || n%400 == 0 ) cout << "YES";
		else cout << "NO";
	}
}
