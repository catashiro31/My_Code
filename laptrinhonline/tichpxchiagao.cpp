#include <bits/stdc++.h>
using namespace std;
int arr[9];
int pos[9];
vector<int> ct(3,0);
int kq = INT_MAX;
void Try(int i) {
	if (i == 9) {
		vector<int> sum(3,0);
		for (int j = 0; j < 9; j++) {
			sum[pos[j]] += arr[j];
		}
		sort(sum.begin(),sum.end());
		kq = min(kq,abs(sum[2]-sum[0]));
		return;
	}
	for (int j = 0; j < 3; j++) {
		if (ct[j] < 3) {
			ct[j]++;
			pos[i] = j;
			Try(i+1);
			ct[j]--;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	for (int &x : arr) cin >> x;
	Try(0);
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}