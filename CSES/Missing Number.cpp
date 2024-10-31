#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n; cin >> n;
	long arr[n-1];
	for (long i = 0; i < n-1; i++) cin >> arr[i];
	sort(arr,arr+n-1);
	for (long i = 0; i < n-1; i++) {
		if (i+1 != arr[i]) {
			cout << i+1 ;
			return 0;
		}
	}
	cout << n;
}
