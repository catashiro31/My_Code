#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, w, t; cin >> n >> w >> t;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int sum = 0;
	long kq = 0;
	for (int i = 0; i < n; i++) {
		if (i < t-1) {
			sum += arr[i];
		} else if (i == t-1) {
			sum += arr[i];
			if (sum < w) {
				kq += w-sum;
				arr[i] += w-sum;
				sum = w;
			}
		} else {
			sum -= arr[i-t];
			sum += arr[i];
			if (sum < w) {
				kq += w-sum;
				arr[i] += w-sum;
				sum = w;
			}
		}
	}
	cout << kq;
}
