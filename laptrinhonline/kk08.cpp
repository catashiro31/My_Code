#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> arr;
string tmp;
int size;
string res;
int x, y;
int kq;
set<string> mang;
void Try(int i) {
	if (i == size) {
		if (res[0] == '0') return;
		if (size == tmp.length()) {
			if (res <= tmp) mang.insert(res);
		} else mang.insert(res);
		return;
	}
	res += to_string(x);
	Try(i+1);
	res.pop_back();
	res+= to_string(y);
	Try(i+1);
	res.pop_back();
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long int n; cin >> n;
	if (n <= 99) cout << n;
	else {
		kq = 99;
		for (int i = 0; i <= 9; i++) {
			for (int j = 0; j <= 9; j++) {
				if (i < j) arr.push_back({i,j});
			}
		}
		tmp = to_string(n);
		for (int i = 3; i <= tmp.length(); i++) {
			for (int j = 0; j < arr.size(); j++) {
				x = arr[j].first;
				y = arr[j].second;
				res = "";
				size = i;
				Try(0);
			}
		}
//		for (string x : mang) cout << x << '\n';
		cout << kq + mang.size();
	}
}

