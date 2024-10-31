#include <bits/stdc++.h>
using namespace std;
int n; 
int Matrix[15][15];
vector<int> lt;
bool check[15];
int sum;
int kq = INT_MAX;
void Try(int i) {
	if (i == n) {
		kq = min(kq,sum+Matrix[lt[lt.size()-1]][lt[0]]);
		return;
	}
	int x = lt[lt.size()-1];
	for (int j = 0; j < n; j++) {
		if (!check[j] && Matrix[x][j] != 0) {
			sum += Matrix[x][j];
			check[j] = true;
			lt.push_back(j);
			if (sum < kq) Try(i+1);
			sum -= Matrix[x][j];
			lt.pop_back();
			check[j] = false;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> Matrix[i][j];
	}
	for (int i = 0; i < n; i++) {
		memset(check,false,sizeof(check));
		lt.clear();
		sum = 0;
		lt.push_back(i);
		check[i] = true;
		Try(1);
		lt.pop_back();
		check[i] = false;
	}
	cout << kq;
}
