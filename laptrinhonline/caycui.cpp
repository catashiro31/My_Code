#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	vector<long> a(n);
	for (long &x : a) inFile >> x;
	inFile.close();
	sort(a.begin(),a.end());
	long res = a[n/2];
	long kq = 0;
	for (int i = 0; i < n; i++) {
		kq += abs(res-a[i]);
	}
	cout << kq;
}
