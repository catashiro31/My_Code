#include <bits/stdc++.h>
using namespace std;
int n;
string kq = "";
void Try(int i) {
	if (i == n) {
		cout << kq << '\n';
		return;
	}
	for (int j = 0; j <= 1; ++j) {
		if (i < 2) {
			kq += to_string(j);
			Try(i+1);
			kq.pop_back();
		} else {
			kq += to_string(j);
			if (kq.substr(kq.size()-3,3) != "101") Try(i+1);
			kq.pop_back();
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	Try(0);
}
