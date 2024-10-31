#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	int a[n];
	for (int &x : a) inFile >> x;
	inFile.close();
	vector<int> sangnt(1000001, 0);
	for (int i = 2; i <= 1000000; i++) {
	    if (sangnt[i] == 0) {
	        for (int j = i; j <= 1000000; j += i) sangnt[j]++;
	    }
	}
	int cmax = 0, pos;
	for (int i = 0; i < n; i++) {
		if (sangnt[a[i]] > cmax) {
			cmax = sangnt[a[i]];
			pos = i;
		}
	}
	cout << a[pos];
}
