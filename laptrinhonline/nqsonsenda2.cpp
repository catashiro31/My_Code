#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t;
	long w;
	cin >> n >> w >> t;
	int arr[n];
	for (int &x : arr) cin >> x;
	long tmp = t*(t-1)/2;
	long sum = 0;
	long kq = 0;
	for (int i = 0; i < n; i++) {
		if (i < t-1) {
			sum += arr[i];
		} else if (i == t-1) {
			sum += arr[i];
			if (sum-tmp < w) {
				kq += w-(sum-tmp);
				arr[i] += w-(sum-tmp);
				sum = w;
			}
		} else {
			sum -= arr[i-t];
			sum += arr[i];
			cout << sum << '\n';
			if (sum-tmp < w) {
				kq += w-(sum-tmp);
				arr[i] += w-(sum-tmp);
				sum = w;
			}
		}
	}
}
