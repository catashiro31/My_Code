#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	priority_queue<int> pq;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		pq.push(x);
	}
	long long kq = 0;
	while (!pq.empty()) {
		int sp1,sp2,sp3; 
		int tmp = 0;
		sp1 = pq.top(); pq.pop();
		tmp += sp1-sp1/3;
		if (!pq.empty()) {
			sp2 = pq.top(); pq.pop();
			tmp += sp2-sp2/3;
		} else {
			kq += tmp;
			break;
		}
		if (!pq.empty()) {
			sp3 = pq.top(); pq.pop();
			tmp += sp3-sp3/3;
		} else {
			kq += tmp;
			break;
		}
		kq += min(tmp,sp1+sp2+sp3-min(min(sp1,sp2),sp3));
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}

