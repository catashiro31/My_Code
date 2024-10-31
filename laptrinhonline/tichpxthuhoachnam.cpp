#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k; cin >> n >> k;
	vector<long> am;
	vector<long> duong;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x < 0) am.push_back(x);
		else duong.push_back(x);
	}
	sort(am.begin(),am.end(),greater<long> ());
	sort(duong.begin(),duong.end());
	vector<int> pos;
	int i = 0, j = 0;
	while (k != 0) {
		if (i < duong.size() && j < am.size()) {
			int kcd, kca;
			if (i == 0) kcd = abs(0-duong[i]);
			else kcd = abs(duong[i]-duong[i-1]);
			if (j == 0) kca = abs(0-am[j]);
			else kca = abs(am[j]-am[j-1]);
			if (kca <= kcd) {
				pos.push_back(am[j]);
				k--;
				j++;
			} else {
				pos.push_back(duong[i]);
				k--;
				i++;
			}
		} else {
			if (i == duong.size()) {
				pos.push_back(am[j]);
				j++;
				k--;
			} else {
				pos.push_back(duong[i]);
				i++;
				k--;
			}
		}
	}
	sort(pos.begin(),pos.end());
//	for (int x : pos) cout << x << " ";
	int kq = pos[pos.size()-1] - pos[0];
	if (abs(pos[0]) >= abs(pos[pos.size()-1])) kq += abs(pos[pos.size()-1]);
	else kq += abs(pos[0]);
	cout << kq;
}
