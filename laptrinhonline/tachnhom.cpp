#include <bits/stdc++.h>
using namespace std;
int kq = 0;
void Find(int n) {
	if (n % 2 == 1 || n <= 4) {
		kq++;
		return;
	}
	Find((n-4)/2);
	Find((n-4)/2+4);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	Find(n);
	cout << kq;
}