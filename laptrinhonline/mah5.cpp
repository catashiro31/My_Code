#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m; cin >> n >> m;
	vector<vector<int>> dp(n+1,vector<int> (m+1,0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == 1 && j == 1) cin >> dp[i][j];
			else {
				int x; cin >> x;
				if (0 < i-1 && 0 < j-1) dp[i][j] = max(dp[i-1][j]+x, dp[i][j-1]+x);
				else if (0 < i-1) dp[i][j] = dp[i-1][j]+x;
				else if (0 < j-1) dp[i][j] = dp[i][j-1]+x;
			}
		}
	}
	cout << dp[n][m];
}