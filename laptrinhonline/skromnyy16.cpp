#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	deque<long long> dq;
	for (int i = 0; i < n; i++) {
		long long x,y; cin >> x >> y;
		dq.push_back(abs(x-y));
	}
	int i = 0;
	long long sumken = 0;
	long long sumkun = 0;
	while (!dq.empty()) {
		long long l = dq.front();
		long long r = dq.back();
		if (l <= r) {
			dq.pop_back();
			if (i % 2 == 0) {
				sumken += r;
				sumken %= m;
			}
			else {
				sumkun += r;
				sumkun %= m;
			}
		} else {
			dq.pop_front();
			if (i % 2 == 0) {
				sumken += l;
				sumken %= m;
			}
			else {
				sumkun += l;
				sumkun %= m;
			}
		}
		i++;
	}
	cout << sumken << '\n' << sumkun << '\n';
	if (sumken > sumkun) cout << "Ken";
	else if (sumken < sumkun) cout << "Kun";
	else cout << -1;
}
