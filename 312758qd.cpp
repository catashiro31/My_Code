#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n;
	inFile >> n;
	int a[n], b[n];
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		inFile >> a[i];
		sum += a[i];
	}
	for (int i = 0; i < n; ++i) {
		inFile >> b[i];
		if (b[i] > a[i]) {
			sum = sum + b[i] - 2*a[i];
		} else sum -= b[i];
	}
    inFile.close();
    cout << abs(sum);
}
