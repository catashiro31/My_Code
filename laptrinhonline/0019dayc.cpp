#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	string n; inFile >> n;
	inFile.close();
	int ccount = 0;
	for (int i = 0; i < n.length(); i++) {
		if (n[i]%2 == 0) ccount++;
		else ccount--;
	}
	if (ccount == 0) cout << "YES";
	else cout << "NO";
}
