#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	long n; inFile >> n;
	inFile.close();
	if (n%3 == 0 && n%5 == 0) cout << 1;
	else cout << 0;
}
