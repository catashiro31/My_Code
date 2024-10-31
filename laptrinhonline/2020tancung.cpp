#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int N,M; inFile >> N >> M;
	inFile.close();
	int base = N % 10;
	int kq = 1;
	while (M > 0) {
		if (M % 2 == 1) {
			kq =(kq*base)%10;
		}
		base = (base*base)%10;
		M /= 2;
	}
	cout << kq;
}
