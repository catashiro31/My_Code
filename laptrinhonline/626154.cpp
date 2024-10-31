#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	string xau; inFile >> xau;
	inFile.close();
	if (xau.size() == 10 and xau[xau.size()-1] != '0' and xau[xau.size()-1] != '4' and xau[xau.size()-1] != '7' and xau[0] == '0') {
		cout << "YES";
	} else cout << "NO";
}
