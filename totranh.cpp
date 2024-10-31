#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n;
	inFile >> n;
	int m;
	inFile >> m;
	int C[n];
    int H[n];
    memset(C,0,sizeof(C));
    memset(H,0,sizeof(H));
	for (int i = 0; i < m; i++) {
		pair<char,int> tmp;
		inFile >> tmp.first >> tmp.second;
		if (tmp.first == 'C') C[tmp.second]++;
		else H[tmp.second]++;
	}
	int kq = 0;
	for (int i = 0 ; i < n; i++) {
		if (H[i] % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (C[j] % 2 == 1) kq++; 
			}
		} else {
			for (int j =  0; j < n; j++) {
				if (C[j] % 2 == 0) kq++;
			}
		}
	}
	cout << kq;
    inFile.close();    
}
