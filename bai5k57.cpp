#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	int arr[n]; 
	for (int i = 0; i < n; i++) inFile >> arr[i];
	inFile.close();
	int kq = 0, tmp = 0;
	if (arr[0] == 0) tmp++;
	for (int i = 1; i < n; i++) {
		if (arr[i] != 0) tmp = 0; 
		else {
			tmp++;
			kq = max(kq,tmp);
		}
	}
	cout << kq;
}
