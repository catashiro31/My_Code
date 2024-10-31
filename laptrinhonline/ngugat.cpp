#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k; cin >> n >> k;
	int a[n], t[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> t[i];
	vector<long> dp(n+1);
	deque<int> st;
	dp[0] = 0;
	long sum = 0;
	long sumbonus = 0;
	for (int i = 1; i <= n; i++) {
		if (t[i-1] == 1) sum += a[i-1];
		if (t[i-1] == 1) dp[i] = dp[i-1] + a[i-1];
		else {
			if (st.empty()) {
				st.push_back(i-1);
				sumbonus += a[i-1];
				dp[i] = max(dp[i-1],sum+sumbonus);
			}
			else {
				st.push_back(i-1);
				sumbonus += a[i-1];
				while (!st.empty() && st.front() < i-k) {
					sumbonus -= a[st.front()];
					st.pop_front();
				}
				dp[i] = max(dp[i-1],sum+sumbonus);
			}
		} 
	}
	cout << dp[n];
}