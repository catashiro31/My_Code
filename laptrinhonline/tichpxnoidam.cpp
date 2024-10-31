#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	multiset<int> a;
	for (int i = 0; i < n; i++) {
		int tmp; inFile >> tmp;
		a.insert(tmp);
	}
	inFile.close();
	int kq = 0;
	while (a.size() > 1) {
		int tmp = *(a.begin());
		a.erase(a.begin());
		tmp += *(a.begin());
		a.erase(a.begin());
		a.insert(tmp);
		kq += tmp;
	}
	cout << kq;
}
