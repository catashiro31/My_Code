#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n, k; inFile >> n >> k;
	int arr[n];
	for (int i = 0; i < n; ++i) inFile >> arr[i];
	inFile.close();
	int kq = 0;
	while (n > 1) {
		n = n - k +1;
		kq++;
	}
	cout << kq;
}
