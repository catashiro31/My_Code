#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	long C; inFile >> C;
	inFile.close();
	cout << fixed << setprecision(2) << ((float)(C*9)/5)+32; 
}
