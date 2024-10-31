#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> kq;
bool check[9];
void Try(int i) {
	if (i == n) {
		for (int x : kq) cout << x;
		cout << endl;
		return;
	}
	for (int j= 1; j <= n; j++) {
		if (check[j] == true) {
			check[j]= false;
			kq.push_back(j);
			Try(i+1);
			kq.pop_back();
			check[j] = true;
		}
	}
}
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	inFile >> n;
    inFile.close();
    memset(check,true,sizeof(check));
    Try(0);
}
