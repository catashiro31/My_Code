#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	long a, b; inFile >> a >> b;
	inFile.close();
	cout << fixed << setprecision(2) << (float)a/b;
}
