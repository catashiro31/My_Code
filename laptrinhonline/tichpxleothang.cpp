#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector<vector<int>> dp(4,vector<int> (n+1,0));
	for (int i = 1; i <= 3; i++) {
		for (int j = i; j <= n; j++) {
			if (i == j) dp[i][j] = 1;
			else {
				dp[i][j] = dp[i][j-i];
				int k = i-1;
				while (k > 0) {
					dp[i][j] += dp[i-k][j-i];
					dp[i][j] += dp[i][j-k];
					k--;
				}
			}
		}
	}
	int kq = 0;
	for (int i = 1; i <= 3; i++) kq += dp[i][n];
	cout << kq;
}
