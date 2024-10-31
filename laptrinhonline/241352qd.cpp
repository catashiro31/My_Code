#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	vector<long> arr;
	long n;
	while (inFile >> n) arr.push_back(n);
	inFile.close();
	int i = 0, j = arr.size()-1;
	while (arr[i] == 0 and i < arr.size()) i++;
	while (arr[j] == 0 and j >= 0) j--;
	if (i == arr.size() or j < 0) {
		for (long x : arr) cout << x << " ";
	} else { 
		long d = (arr[j]-arr[i])/(j-i);
		for (int k = 0; k < arr.size(); k++) {
			if (arr[k] == 0) arr[k] = arr[i] - d* (i-k);
		}
		for (int x : arr) cout << x << " ";
	}
}
