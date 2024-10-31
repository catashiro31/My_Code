#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n, m; inFile >> n >> m;
	int f[m];
	for (int &x : f) inFile >> x;
	inFile.close();
	sort(f,f+m);
	int kq = INT_MAX;
	for (int i = 0; i <= m-n; i++) {
		kq = min(kq,f[i+n-1]-f[i]);
	}
	cout << kq;
}
