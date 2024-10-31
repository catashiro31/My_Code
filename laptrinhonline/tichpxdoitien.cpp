#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n, q;
	inFile >> n >> q;
	int coin[n];
	for (int &x : coin) inFile >> x;
	int trv[q];
	int s = 0;
	for (int &x : trv) {
		inFile >> x;
		s = max(x,s);
	}
	inFile.close();
	sort(coin,coin+n);
	int dp[n+1][s+1];
	memset(dp,0,sizeof(dp));
	for (int i = 0; i <= s; i++) dp[0][i] = -1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= s; j++) {
			if (coin[i-1] > j) {
				if (dp[i-1][j] == -1) dp[i][j] = -1;
				else dp[i][j] = dp[i-1][j];
			} else {
				if (dp[i][j-coin[i-1]] == -1) {
					if (dp[i-1][j] == -1) dp[i][j] = -1;
					else dp[i][j] = dp[i-1][j];
				} else {
					if (dp[i-1][j] == -1) dp[i][j] = dp[i][j-coin[i-1]]+1;
					else dp[i][j] = min(dp[i][j-coin[i-1]]+1,dp[i-1][j]);
				}
			}
		}
	}
	for (int i = 0; i < q; i++) {
		if (dp[n][trv[i]] == 0) cout << -1;
		else cout << dp[n][trv[i]] << endl;
	}
}
