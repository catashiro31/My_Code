#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	long long n; inFile >> n;
	inFile.close();
	cout << 1LL* n*(n+1)/2;
}
