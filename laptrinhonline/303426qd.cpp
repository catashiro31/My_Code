#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k; cin >> n >> k;
	vector<int> ngan_xep;
	for (int i = 0; i < k; i++) {
		string query; cin >> query;
		if (query == "PUSH") {
			int x; cin >> x;
			if (ngan_xep.size() < n) ngan_xep.push_back(x);
		}
		if (query == "POP" && !ngan_xep.empty()) ngan_xep.pop_back();
	} 
	for (int i = ngan_xep.size()-1; i >= 0; i--) cout << ngan_xep[i] << " ";
}