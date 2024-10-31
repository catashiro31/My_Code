#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int N; inFile >> N;
	int arr[N];
	long sum = 0;
	for (int i = 0; i < N; i++) inFile >> arr[i];
	inFile.close();
	sort(arr,arr+N);
	long kq = 0;
	for (int i = 0; i < N; i++) {
		kq += abs(arr[N/2]-arr[i]);
	}
	cout << kq;
}
