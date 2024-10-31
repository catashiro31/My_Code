#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	string n; inFile >> n;
	inFile.close();
	int sum = 0;
	vector<int> nub(10,0);
	for (int i = 0; i < n.length(); i++) {
		sum += n[i]-48;
		nub[n[i]-48]++;
	}
	if (sum%9 == 0 and nub[0] != 0) {
		for (int i = 9; i >= 0; i--) {
			for (int j = 0; j < nub[i]; j++) cout << i;
		}
	} else cout << -1;
}
