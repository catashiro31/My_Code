#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	string n; inFile >> n;
	inFile.close();
	string tmp = "";
	for (int i = 0; i < n.length(); i++) tmp = n[i]+ tmp;
	if (tmp == n) cout << "YES";
	else cout << "NO";
}
