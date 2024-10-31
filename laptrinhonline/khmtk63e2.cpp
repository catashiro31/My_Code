#include <bits/stdc++.h>
using namespace std;
int n;
int size;
string a[20];
int ccount = 0;
int check[20];
vector<int> kq;
void Try(int i) {
	if (i == size) {
		vector<int> tmp(26,0);
		for (int x : kq) {
			for (int j = 0; j < a[x].size(); j++) {
				tmp[a[x][j]-'a']++;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (tmp[j] == 0) return;
		}
		ccount++;
		return;
	}
	for (int j = 0; j < n; j++) {
		if (!check[j] && (kq.empty() || kq[kq.size() - 1] < j)) {
			check[j] = true;
			kq.push_back(j);
			Try(i+1);
			check[j] = false;
			kq.pop_back();
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 2; i <= n; i++) {
		kq.clear();
		memset(check,false,sizeof(check));
		size = i;
		Try(0);
	}
	cout << ccount;
}


