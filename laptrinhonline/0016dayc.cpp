#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	long a, b, c, n;
	inFile >> a >> b >> c >> n;
	long sum = a+b+c+n;
	if (sum%3 == 0) {
		sum = sum/3;
		if (sum >= a and sum >= b and sum >= c) cout << "YES";
		else cout << "NO";
	} else cout << "NO";
	inFile.close();
}
