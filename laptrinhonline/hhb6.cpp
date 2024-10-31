#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int arr[n];
	for (int &x : arr) cin >> x;
	int kq= 0;
	for (int i = 1; i < n-1; i++) {
		if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) kq++;
	}
	cout << kq;
}
