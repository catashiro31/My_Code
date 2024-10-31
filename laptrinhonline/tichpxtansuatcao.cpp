#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	long arr[n];
	for (long &x : arr) inFile >> x;
	inFile.close();
	sort(arr,arr+n);
	int tmp = 1;
	int cmax = 1;
	vector<long> kq;
	kq.push_back(arr[0]);
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i-1]) {
			tmp++;
			if (tmp == cmax) kq.push_back(arr[i]);
			else if (tmp > cmax){
				cmax = tmp;
				kq.clear();
				kq.push_back(arr[i]);
			}
		} else {
			tmp = 1;
			if (tmp == cmax) kq.push_back(arr[i]);
		}
	}
	cout << cmax << '\n';
	for (long x : kq) cout << x << " ";
}
