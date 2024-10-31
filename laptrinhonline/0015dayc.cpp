#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	char x; inFile >> x;
	inFile.close();
	if (islower(x)) cout << (char)toupper(x);
	else cout << x;
}
