#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int arr[n];
	for (int &x : arr) cin >> x;
	int max_L[n], max_R[n];
	int tmp_L = -1, tmp_R = -1;
	for (int i = 0; i < n; i++) {
		if (tmp_L < arr[i]) {
			max_L[i] = -1;
			tmp_L = arr[i];
		} else max_L[i] = tmp_L;
	}
	for (int i = n-1; i >= 0; i--) {
		if (tmp_R < arr[i]) {
			max_R[i] = -1;
			tmp_R = arr[i];
		} else max_R[i] = tmp_R;
	}
	long long kq = 0;
	for (int i = 0; i < n; i++) {
		if (max_L[i] != -1 && max_R[i] != -1) {
			kq += min(max_L[i],max_R[i]) - arr[i];
		}
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
