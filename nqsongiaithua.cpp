#include <bits/stdc++.h>
#define m 2000000014
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n;
	inFile >> n;
	int a[n];
	for (auto &k : a) inFile >> k;
	int x; inFile >> x;
    inFile.close();
    sort(a,a+n);
    vector<long> dp(n-1,1);
    for (int i = 1; i <= a[0]; i++) dp[0] = (dp[0]*i)%m;
    long kq = dp[0];
    for (int i = 1; i < n-1; i++) {
    	dp[i] = dp[i-1] * dp[i];
    	for (int j = a[i-1]+1; j <= a[i]; j++) dp[i] = (dp[i]*j)%m;
    	kq = (kq*dp[i])%m;
	}
	for (int i = x+1; i <= a[n-1]; i++) kq = (kq*i)%m;
	cout << kq;
}
