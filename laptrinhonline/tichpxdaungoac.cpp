#include <bits/stdc++.h>
using namespace std;
int n;
int check = 0;
int dong = 0;
int mo = 0;
string kq = "";
void Try(int i) {
	if (i == n*2) {
		cout << kq << '\n';
		return;
	}
	if (mo < n) {
		mo++;
		check++;
		kq += "(";
		Try(i+1);
		check--;
		mo--;
		kq.pop_back();
	}
	if (dong < n && check > 0) {
		kq += ")";
		dong++;
		check--;
		Try(i+1);
		check++;
		dong--;
		kq.pop_back();
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	Try(0);
}
