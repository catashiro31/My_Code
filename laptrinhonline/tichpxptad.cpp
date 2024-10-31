#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int N; inFile >> N;
	long arr[N];
	for (long &x : arr) inFile >> x;
	inFile.close();
	sort(arr,arr+N);
	int tmp = 1, kq = 0, value;
	for (int i = 1; i < N; i++) {
		if (arr[i] == arr[i-1]) {
			tmp++;
			if (kq < tmp) {
				value = arr[i];
				kq = tmp;
			}
		} else tmp = 1;
	}
	if (kq > N/2) cout << value;
	else cout << "khong co phan tu ap dao";
}
