#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int t;
	inFile >> t;
    while (t != 0) {
    	int n;
    	inFile >> n;
    	long long a[n];
    	long long sum = 0;
    	for (int i = 0; i < n; i++) {
			inFile >> a[i];
			sum += a[i];
		}
		if (sum % 2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
    	t--;
	}
	inFile.close();
}
