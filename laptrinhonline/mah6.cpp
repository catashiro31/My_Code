#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a(12);
vector<int> pos(12);
vector<int> value;
int kq = 0;
void Try(int i) {
	if (i == n) {
		map<int,int> check;
		for (int j = 0; j < n; j++) {
			check[pos[j]] += a[j];
		}
		for (int j = 1; j < k; j++) {
			if (check[j] != check[0]) return;
		}
		kq++;
		return;
	}
	for (int j = 0; j < k; j++) {
		pos[i] = j;
		Try(i+1);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> k;
	long long tmp = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < k; i++) tmp*=i+1;
	Try(0);
	cout << kq/tmp;
}