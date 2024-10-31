#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int t; inFile >> t;
	pair<int,int> arr[t];
	for (auto &x : arr) inFile >> x.first >> x.second;
	inFile.close();
	for (auto &x : arr) {
		if (x.second > x.first*9) cout << -1;
		else {
			if (x.second > (x.first-1)*9) {
				cout << x.second - (x.first-1)*9;
				x.second -= x.second - (x.first-1)*9;
				x.first--;
			} else {
				cout << 1;
				x.second--;
				x.first--;
			}
			int tmp = 0;
			while (x.first != 0) {
				if (x.second > (x.first-1)*9) {
					cout << x.second - (x.first-1)*9;
					x.second -= x.second - (x.first-1)*9;
					x.first--;
				} else {
					cout << tmp;
					x.first--;
				}
			}
		}
		cout << endl;
	}
}
