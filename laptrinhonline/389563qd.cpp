#include <bits/stdc++.h>
using namespace std;
int main() {
	string xau;
	getline(cin, xau);
    for (int i = 0; i < xau.size(); i++) {
    	if (int(xau[i]) >= 97 and int(xau[i]) <= 122) continue;
    	else {
    		cout << "NO";
    		return 0;
		}
	}
	cout << "YES";
	return 0;
}
