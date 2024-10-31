#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		pair<long,long> arr[n];
		for (auto &vl : arr) {
			long x, r; cin >> x >> r;
			vl.first = x - r;
			vl.second = x + r;
		}
		sort(arr,arr+n);
		long long dp[n];
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				dp[i] = arr[i].second - arr[i].first;
			} else {
				if (arr[i].first > arr[i-1].second) {
					dp[i] = dp[i-1] + (arr[i].second-arr[i].first);
				} else {
					dp[i] = dp[i-1] + (arr[i].second-arr[i].first) - (min(arr[i-1].second,arr[i].second)-arr[i].first);
					arr[i].second = max(arr[i].second,arr[i-1].second);
				} 
			}
		}
		cout << dp[n-1] << '\n';
	}
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
