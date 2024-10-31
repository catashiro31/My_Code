#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	pair<int,int> arr[n];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i-1].first;
		arr[i-1].second = i;
	}
	sort(arr,arr+n);
	for (int i = 0; i < n; i++) {
		cout << arr[i].second << " ";
	}
}
