#include <bits/stdc++.h>
using namespace std;
int n;
int ccount = 0;
vector<int> kq;
bool check[21];
void Try(int i) {
	if (i == n) {
		ccount++;
		for (int x : kq) cout << x << " ";
		cout << '\n';
		return;
	}
	for (int j = 1; j <= n; j++) {
		if (!check[j]) {
			if (i < 1) {
				check[j] = true;
				kq.push_back(j);
				Try(i+1);
				kq.pop_back();
				check[j] = false;
			} else {
				if ((kq[kq.size()-1]+j) % 4 != 0) {
					check[j] = true;
					kq.push_back(j);
					Try(i+1);
					kq.pop_back();
					check[j] = false;
				}
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	memset(check,false,sizeof(check));
	Try(0); 
	cout << ccount;
}
