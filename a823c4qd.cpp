#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n;
	inFile >> n;
	long arr[n];
	for (long &x : arr) inFile >> x;
    inFile.close();
    sort(arr,arr+n,greater<int> ());
    int status = -1;
    long long kq = 0;
    for (int i = 0; i < n; i++) {
    	if (arr[i]%2 != status) {
    		kq += arr[i];
    		status = arr[i]%2;
		}
	}
	cout << kq;
}
