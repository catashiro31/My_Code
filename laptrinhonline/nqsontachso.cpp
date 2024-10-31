#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector<int> dp(n+1,0);
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= 0; j--) {
			if (j - i >=  0) {
				dp[j] += dp[j-i];
				dp[j] %= m;
			} else break;
		}
	}
	cout << dp[n];
}
