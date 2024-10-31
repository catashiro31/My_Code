#include <bits/stdc++.h>
using namespace std;
int n;
int arr[20];
int pos[20];
int cmin = INT_MAX;
void Try(int i) {
	if (i == n) {
		int first = 0, second = 0;
		for (int i = 0; i < n; i++) {
			if (pos[i] == 1) first += arr[i];
			else second += arr[i];
		}
		cmin = min(abs(first-second),cmin);
		return;
	}
	pos[i] = 1;
	Try(i+1);
	pos[i] = 2;
	Try(i+1);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	Try(0);
	cout << cmin;
}
