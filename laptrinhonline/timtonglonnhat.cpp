#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int m; cin >> m;
	int arr[m][3];
	for (int i = 0; i < m; i++) cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	int dp[m][3];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) dp[i][j] = arr[i][j];
			else {
				if (j == 0) dp[i][j] = max(dp[i-1][1],dp[i-1][2])+arr[i][j];
				else if (j == 1) dp[i][j] = max(dp[i-1][0],dp[i-1][2])+arr[i][j];
				else dp[i][j] = max(dp[i-1][1],dp[i-1][0])+arr[i][j];
			}
		}
	}
	cout << max(max(dp[m-1][0],dp[m-1][1]),dp[m-1][2]);
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
