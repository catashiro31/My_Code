#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; cin >> N;
	vector<int> arr(N);
	for (int i = 0; i < N; i++) cin >> arr[i];
	long kq = 0;
	for (int i = 0; i < N-1; i++) {
		for (int j = i + 1; j < N; j++) {
			kq += abs(arr[i]-arr[j]);
		}
	}
	cout << kq;
}
