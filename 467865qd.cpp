#include <bits/stdc++.h>
using namespace std;
int main() {
	int arr[9];
	for (int i = 0; i < 9; i++) cin >> arr[i];
	int tmp[10];
	memset(tmp,0,sizeof(tmp));
	for (int i = 0; i < 9; i++) {
		if (arr[i] <= 9 and arr[i] >= 1) tmp[arr[i]]++;
		else {
			cout << "INVALID";
			return 0;
		}
	}
	for (int i = 1; i <= 9; i++) {
		if (tmp[i] == 1) continue;
		else {
			cout << "INVALID";
			return 0;
		}
	}
	cout << "VALID";
}
