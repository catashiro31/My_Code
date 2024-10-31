#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,k;  cin >> n >> k;
	int arr[n];
	priority_queue<int,vector<int>,greater<int>> pq;
	for (int &x : arr) {
		cin >> x;
		pq.push(x);
	}
	long kq = 0;
	while (!pq.empty()) {
		int tmp = 0;
		for (int i = 0; i < k; i++) {
			if (pq.empty()) break;
			else {
				tmp += pq.top();
				pq.pop();
			}
		}
		kq += tmp;
		if (pq.empty()) break;
		pq.push(tmp);
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
