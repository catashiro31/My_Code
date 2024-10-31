#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int arr[n];
	int cmax = 0;
	for (int &x : arr) {
		cin >> x;
		cmax = max(cmax,x);
	}
	int tmp = cmax/2;
	vector<int> up, down;
	for (int x : arr) {
		if (x > tmp) up.push_back(x);
		else down.push_back(x*2);
	}
	sort(up.begin(),up.end(),greater<int>());
	sort(down.begin(),down.end(),greater<int>());
	int i = 0, j = 0;
	int kq = 0;
	while (i < up.size() && j < down.size()) {
		if (up[i] >= down[j]) {
			kq++;
			i++; j++;
		} else {
			j++;
			kq++;
		}
	}
	while (i < up.size()) {
		kq++;
		i++;
	}
	while (j < down.size()){
		kq++;
		j++;
	}
	cout << kq;
}
