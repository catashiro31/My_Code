#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
int main() {
	int n;
	cin >> n;
    long long arr[n+1];
    for (int i = 0; i <= n; i++) {
    	if (i == 1 or i == 0) arr[i] = 1;
    	if (i == 2 or i == 3) arr[i] = 0;
    	if (i > 3) {
    		arr[i] = (((i+1)*arr[i-1] - (i-2)*arr[i-2] - (i-5)*arr[i-3] + (i-3)*arr[i-4])%m+m)%m;
		}
	}
	cout << arr[n];
}
