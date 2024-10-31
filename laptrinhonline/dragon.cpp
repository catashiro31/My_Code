#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int s,n; inFile >> s >> n;
	pair<int,int> arr[n];
	for (auto &x : arr) inFile >> x.first >> x.second;
	inFile.close();
//	for (auto x : arr) cout << x.first << " " << x.second << endl;
	sort(arr,arr+n);
	for (int i = 0; i < n; i++) {
		if (s > arr[i].first) {
			s += arr[i].second;
		} else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
