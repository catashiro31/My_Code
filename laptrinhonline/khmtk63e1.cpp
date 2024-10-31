#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int N, Q; inFile >> N >> Q;
	int x[N];
	for (int &k : x) inFile >> k;
	int A[Q],B[Q];
	int tmp = 0;
	for (int i = 0; i < Q; i++) {
		inFile >> A[i] >> B[i];
		tmp = max(tmp,A[i]);
		tmp = max(tmp,B[i]);
	}
	inFile.close();
	sort(x,x+N);
	int dp[tmp+1];
	int j = 0, ccount = 0;
	for (int i = 0; i <= tmp; i++) {
		if (i == x[j] and j < N) {
			ccount++;
			j++;
		}
		dp[i] = ccount;
	}
	for(int i = 0; i < Q; i++) {
		if (A[i] == 0) cout << dp[B[i]] << endl;
		else cout << dp[B[i]] - dp[A[i]-1] << endl;
	}
}
