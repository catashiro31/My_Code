#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k; cin >> n >> k;
	int arr[n];	
	for (int &x : arr) cin >> x;
	sort(arr,arr+n);
	int check[n];
	memset(check,0,sizeof(check));
	int sl = 0;
	long kq = 0;
	for (int i = 0; i < n-1; i++) {
		if (check[i] == 0) {
			sl++;
			int tmp = arr[i];
			for (int j = i+1; j < n; j++) {
				if (check[j] == 0 && arr[j] - tmp >= k) {
					check[j] = sl;
					tmp = arr[j];
				}
			}
			kq+= tmp;
		}
	}
	cout << sl << " " << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
