#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	int a[n];
	for (int &x : a) inFile >> x;
	inFile.close();
	vector<pair<int,int>> kq;
	for (int i = 0; i < 3; i++) {
		int cmax = 0, tmp = 0;
		for (int j = 0; j < n; j++) {
			if (i == 0) {
				if (a[j] > cmax) {
					tmp = 1;
					cmax = a[j];
				} else if (a[j] == cmax) tmp++;
			} else {
				if (a[j] > cmax and a[j] < kq[i-1].first) {
					tmp = 1;
					cmax = a[j];
				} else if (a[j] == cmax) tmp++;
			}
		}
		kq.push_back({cmax,tmp});
	}
	cout << "1st: " << kq[0].second << endl;
	cout << "2nd: " << kq[1].second << endl;
	cout << "3rd: " << kq[2].second << endl;
}
