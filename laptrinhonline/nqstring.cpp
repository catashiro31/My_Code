#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string xau; 
	getline(cin,xau);
	string kq = "";
	for (char x : xau) {
		if (x != '#') kq += x;
		else {
			if (!kq.empty()) kq.pop_back();
		}
	}
	cout << kq;
	cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
