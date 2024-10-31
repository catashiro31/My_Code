#include <bits/stdc++.h>
using namespace std;
long GCD(long a, long b) {
	if (b == 0) return a;
	return GCD(b,a%b);
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	long n;
	vector<long> arr;
	while (inFile >> n) arr.push_back(n);
	inFile.close();
	long d = arr[1]-arr[0];
	if (d == 0) cout << 0;
	else {
		for (int i = 2; i < arr.size(); i++) {
			d = GCD(arr[i]-arr[0],d);
		}
		cout << (arr[arr.size()-1]-arr[0])/d -arr.size()+1;
	}
}
