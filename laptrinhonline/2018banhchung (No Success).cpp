#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int arr[5];
	memset(arr,0,sizeof(arr));
	for (int &x : a) {
		cin >> x;
		arr[x]++;
	}
	int kq = arr[4];
	if (sum > 4) {
		arr[4] = 0;
		if (arr[3] >= arr[1]) {
			kq += arr[3];
			arr[1] = 0;
		} else {
			kq += arr[3];
			arr[1] -= arr[3];
			arr[3] = 0;
		}
		kq += arr[1]/4;
		arr[1] %= 4;
		if (arr[1]%2 == 0) {
			arr[1] /= 2;
		} else {
			kq += 1;
			arr[1] = (arr[1])/2;
		}
		if (arr[1] >= arr[2]) {
			kq += arr[1];
			arr[2] = 0;
		} else {
			kq += arr[1];
			arr[2] -= arr[1];
			arr[1] = 0;
		}
		if (arr[2] % 2 == 0) kq += arr[2]/2;
		else kq += 1 + (arr[2]-1)/2; 
	} else kq = 1;
	cout << kq;
}