#include<bits/stdc++.h>
using namespace std;
bool require(vector<long> x, long n, int c) {
	int tmp = 1;
	long pos = x[0];
	for (long vl : x) {
		if (vl - pos >= n) {
			tmp++;
			pos = vl;
		}
		if (tmp == c) return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N,C; cin >> N >> C;
	vector<long> x(N);
	for (long &vl : x) cin >> vl;
	sort(x.begin(),x.end());
	long l = 1, r = x[x.size()-1]-x[0];
	long kq = 0;
	while (l <= r) {
		long mid = (l+r)/2;
		if (require(x,mid,C)) {
			kq = mid;
			l = mid+1;
		} else r = mid-1;
	}
	cout << kq;
}