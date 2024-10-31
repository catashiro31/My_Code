#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
    int f[n+1][sum+1];
    memset(f,0,sizeof(f));
    for (int i = 0; i <= n; i++) f[i][0] = 1;
    sort(arr,arr+n);
    for (int i = 1; i <= n; i++) {
    	for (int j = 1; j <= sum; j++) {
    		if (f[i-1][j] == 1) f[i][j] = 1;
    		else {
    			if (f[i-1][j-arr[i-1]] == 1) f[i][j] = 1;
			}
		}
	}
	vector<int> kq;
	for (int i = 1; i <= sum; i++) {
		if (f[n][i] == true) kq.push_back(i);
	}
	cout << kq.size() << endl;
	for (int x : kq) cout << x << " ";
}
