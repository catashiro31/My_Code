#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int N; inFile >> N;
	long arr[N];
	for (long &x : arr) inFile >> x;
	inFile.close();
	vector<int> LIS(N,1);
	for (int i = 1; i < N; i++) {
		if (arr[i] >= arr[i-1]) LIS[i] = LIS[i-1]+1;
	}
	vector<int> LDS(N,1);
	for (int i = N-2; i >= 0; i--) {
		if (arr[i] >= arr[i+1]) LDS[i] = LDS[i+1]+1;
	}
	int kq = 0;
	for (int i = 0; i < N; i++) kq = max(kq,LDS[i]+LIS[i]-1);
	cout << kq;
}
