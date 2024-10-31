#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int tmp = n/10;
	n %= 10;
	for (int i = 0; i < tmp; i++) cout << "X";
	tmp = n/5;
	n %= 5;
	for (int i = 0; i < tmp; i++) cout << "V";
	for (int i = 0; i < n; i++) cout << "I";
}
