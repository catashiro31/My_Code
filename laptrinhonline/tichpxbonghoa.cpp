#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	pair<int,int> arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first;
		arr[i].second = i;
	}
	sort(arr,arr+n); 
	int check[n];
	memset(check,0,sizeof(check));
	int kq = 0;
	for (int i = 0; i < n; i++) {
		int pos = arr[i].second;
		if (check[pos] == 0) {
			kq++;
			check[pos] = 1;
			if (pos-1 >= 0) check[pos-1] = 1;
			if (pos+1 < n) check[pos+1] = 1;
		}
	}
	cout << kq;
}
