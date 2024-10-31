#include <bits/stdc++.h>
using namespace std;
int n;
vector<bool> cheotren(20,true);
vector<bool> cheoduoi(20,true);
vector<bool> pos(11,true);
int kq = 0;
void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (pos[j] and cheotren[i+j-1] and cheoduoi[j-i+n]) {
			pos[j] = false;
			cheotren[i+j-1] = false;
			cheoduoi[j-i+n] = false;
			if (i == n) kq++;
			else Try(i+1);
			cheotren[i+j-1] = true;
			cheoduoi[j-i+n] = true;
			pos[j] = true;
		}
	} 
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	inFile >> n;
	inFile.close();
	Try(1);
	cout << kq;
}
