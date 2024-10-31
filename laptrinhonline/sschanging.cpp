#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	n = 1000-n;
	int ccount = 0;
	while (n >= 500) {
		n -= 500;
		ccount++;
	} 
	while (n >= 100) {
		n -= 100;
		ccount++;
	}
	while (n >= 50) {
		n -= 50;
		ccount++;
	}
	while (n >= 10) {
		n -= 10;
		ccount++;
	}
	while (n >= 5) {
		n -= 5;
		ccount++;
	}
	while (n >= 1) {
		n -= 1;
		ccount++;
	}
	cout << ccount;
}
