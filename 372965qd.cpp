#include <bits/stdc++.h>
using namespace std;
int length(long n) {
	int kq = 0;
	while (n != 0) {
		n /= 10;
		kq++;
	}
	return kq;
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	vector<long> arr;
	while (true) {
		long tmp; inFile >> tmp;
		if (tmp == -1) break;
		else arr.push_back(tmp);		
	}
	inFile.close();
	long long kq = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] < arr[i-1]) kq += arr[i];
		else {
			if (arr[i-1] != 0) {
				int q = length(arr[i])-1;
				long dem = arr[i];
				int j;
				while (dem >= arr[i-1]) {
					cout << dem << endl;
					if (length(dem) == length(arr[i-1])) {
						if (dem != arr[i-1]) {
							
						} else arr[i] = dem - dem%10;
					}
					j = pow(10,q);
					dem = dem%j;
					q--;
				}
				arr[i] = dem;
				kq += dem;
			} else arr[i] = 0;
		}
	}
	for (long x : arr) cout << x << endl;
}