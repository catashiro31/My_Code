#include <bits/stdc++.h>
using namespace std;
int arr[9];
int n; 
string tmp = "";
void Try(int i) {
	if (i == n) {
		cout << tmp << endl;
		return;
	}
	for (int j = 0; j <= 1; j++) {
		tmp += to_string(j);
		Try(i+1);
		tmp.pop_back();
	}
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	inFile >> n;
	inFile.close();
	Try(0);
}
