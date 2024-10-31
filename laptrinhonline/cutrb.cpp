#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a[4]; 
	a[0] = 0;
	cin >> n >> a[1] >> a[2] >> a[3];
	sort(a,a+4);
	vector<vector<int>> dp(4,vector<int> (n+1,0));
	for (int i = 1; i < 4; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == a[i]) dp[i][j] = max(dp[i-1][j],1);
			else if (j > a[i]) {
				dp[i][j] = dp[i-1][j];
				if (dp[i][j-a[i]] != 0) dp[i][j] = max(dp[i][j],dp[i][j-a[i]]+1);
				if (dp[i-1][j-a[i]] != 0) dp[i][j] = max(dp[i][j],dp[i-1][j-a[i]]+1);
			} else dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[3][n];
}
