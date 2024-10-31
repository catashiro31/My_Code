#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, x;
	cin >> n >> x;
	int h[n+1];
	for (int i = 1; i <= n; i++) cin >> h[i];
	int s[n+1];
	for (int i = 1; i <= n; i++) cin >> s[i];
    int arr[n+1][x+1];
    memset(arr,0,sizeof(arr));
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= x; j++) {
    		if (h[i] > j) arr[i][j] = arr[i-1][j];
    		else arr[i][j] = max(arr[i-1][j], arr[i-1][j-h[i]]+s[i]);
		}
	}
	cout << arr[n][x];
}
