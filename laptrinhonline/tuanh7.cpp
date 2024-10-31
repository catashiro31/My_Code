#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; cin >> N;
	long long L[N];
	int check = 0; 
	long long tmp = LLONG_MAX;
	for (long long &x : L) {
		cin >> x;
		if (tmp > x) {
			check++;
			tmp = x;
		}
	}
	if (check == N) cout << "HAHA";
	else {
		long long kq = LLONG_MIN;
		long long maxr = LLONG_MIN;
		for (int i = N-1; i > 0; i--) {
			maxr = max(maxr,L[i]);		
			kq = max(kq,maxr-L[i-1]);
		}
		cout << kq;
	}
}
