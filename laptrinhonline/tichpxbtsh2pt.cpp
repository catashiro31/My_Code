#include <bits/stdc++.h>
using namespace std;
int caculate(int a, char alpha, int b) {
	if (alpha == '+') return a+b;
	if (alpha == '-') return a-b;
	if (alpha == '*') return a*b;
	if (alpha == '/') return a/b;
	return 0;
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	string xau; inFile >> xau;
	inFile.close();
	int tmp = 0;
	vector<int> a;
	vector<char> alpha;
	for (int i = 0; i < xau.length(); i++) {
		if (isdigit(xau[i])) {
			tmp = tmp*10+xau[i]-48;
		} else {
			alpha.push_back(xau[i]);
			a.push_back(tmp);
			tmp = 0;
		}
	}
	a.push_back(tmp);
	if ((alpha[0] == '+' || alpha[0] == '-') & (alpha[1] == '*' || alpha[1] == '/')) {
		cout << caculate(a[0],alpha[0],caculate(a[1],alpha[1],a[2]));
	} else cout << caculate(caculate(a[0],alpha[0],a[1]),alpha[1],a[2]);
}
