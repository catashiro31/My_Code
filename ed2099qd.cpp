#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	string xau; inFile >> xau;
	int L = xau.length();
	int q; inFile >> q;
	pair<int,int> change[q];
	for (auto &x : change) inFile >> x.first >> x.second; 
	inFile.close();
	vector<int> diff(L,0);
	for (int i = 0; i < q; i++) {
		diff[change[i].first]++;
		if (change[i].second+1 < L) diff[change[i].second+1]--;
	}
	int sum = 0;
	for (int i = 0; i < L; i++) {
		sum += diff[i];
		if (sum % 2 != 0) {
			if (xau[i] == '1') xau[i] = '0';
			else xau[i] = '1';
		} 
	}
	cout << xau;
}
