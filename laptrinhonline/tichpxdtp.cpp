#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> arr;
set<string> kq;
void Try(int i) {
	if (i == n) {
		string tmp = "";
		for (int x : arr) tmp += to_string(x) + " ";
		kq.insert(tmp);
		return;
	}
	for (int j = 0; j <= 2; j++) {
		if (arr.empty() || (arr[arr.size()-1] != j && (arr[arr.size()-1]+j) % 3 != 0)) {
			arr.push_back(j);
			Try(i+1);
			arr.pop_back();
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	Try(0);
	for (string x : kq) cout << x << '\n';
	cout << kq.size();
}
