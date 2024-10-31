#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int N; inFile >> N;
	string arr[N];
	vector<int> check(5,0);
	for (string &x : arr) {
		inFile >> x;
		if (x[0] == 'A') check[0]++;
		if (x[0] == 'C') check[1]++;
		if (x[0] == 'R') check[2]++;
		if (x[0] == 'H') check[3]++;
		if (x[0] == 'M') check[4]++;
	}
	inFile.close();
	long long kq = 0;
	for (int i = 0; i <= 2; i++) {
		for (int j = i+1; j <= 3; j++) {
			for (int k = j+1; k <= 4; k++) {
				kq += 1LL * check[i]*check[j]*check[k];
			}
		}
	}
	cout << kq;
}
