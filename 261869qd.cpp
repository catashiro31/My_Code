#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int arr[3];
	for (int &x : arr) inFile >> x; 
    inFile.close();
    int cmax = INT_MIN, cmin = INT_MAX;
	for (int x : arr) {
		if (x > cmax) cmax = x;
		if (x < cmin) cmin = x; 
	}
	cout << (cmax - cmin) -2;
}
