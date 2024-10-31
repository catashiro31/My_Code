#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int m,n; cin >> m >> n;
	vector<vector<long>> grid(m,vector<long>(n));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) cin >> grid[i][j];
	}
	vector<vector<long long>> dp(m,vector<long long> (n));
	vector<vector<int>> paths(m,vector<int> (n,0));
	dp[0][0] = grid[0][0];
	paths[0][0] = 1;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 && i == 0) continue;
			else {
				if (j == 0) {
					if (dp[i-1][j] > 0 && grid[i][j] > 0) {
						dp[i][j] = dp[i-1][j] + grid[i][j];
						paths[i][j] +=  paths[i-1][j];
					} else {
						dp[i][j] = 0;
						paths[i][j] = 0;
					}
				} else if (i == 0) {
					if (dp[i][j-1] > 0 && grid[i][j] > 0) {
						dp[i][j] = dp[i][j-1] + grid[i][j];
						paths[i][j] += paths[i][j-1];
					} else {
						dp[i][j] = 0;
						paths[i][j] = 0;
					}
				} else {
					if (dp[i][j-1] > 0 && dp[i-1][j] > 0 && grid[i][j] > 0) {
						dp[i][j] = min(dp[i-1][j],dp[i][j-1]);
						if (dp[i][j] == dp[i-1][j]) paths[i][j] += paths[i-1][j];
						if (dp[i][j] == dp[i][j-1]) paths[i][j] += paths[i][j-1];
						dp[i][j] += grid[i][j];
					} else if (dp[i][j-1] > 0 && grid[i][j] > 0) {
						dp[i][j] = dp[i][j-1] + grid[i][j];
						paths[i][j] += paths[i][j-1];
					} else if (dp[i-1][j] > 0 && grid[i][j] > 0) {
						dp[i][j] = dp[i-1][j] + grid[i][j];
						paths[i][j] += paths[i-1][j];
					} else {
						dp[i][j] = 0;
						paths[i][j] = 0;
					}
				}
			}
		}
	}
	cout << dp[m-1][n-1] << " " << paths[m-1][n-1];
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
