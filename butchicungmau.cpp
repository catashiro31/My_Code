#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n;
	inFile >> n;
	int arr[n];
	int cmax = 1, tmp = 1;
	for (int i = 0; i < n; i++) {
		inFile >> arr[i];
		if (i >= 1) {
			if (arr[i] == arr[i-1]) {
				tmp++;
				cmax =max(cmax,tmp);
			} else tmp = 1;
		}
	}
	cout << n-cmax;
    inFile.close();
}
