#include <bits/stdc++.h>
using namespace std;
int Binary_Search(pair<int,long int> arr[],long int x, int L, int H, int i) {
	int mid = (L+H)/2;
	if (x < arr[mid].first and L != mid) return Binary_Search(arr,x,L,mid,i);
	if (x > arr[mid].first and mid+1 != H) return Binary_Search(arr,x,mid+1,H,i);
	if (x == arr[mid].first and mid != i) return arr[mid].second;
	return -1;
}
int main() {
	int n;
	long int x;
	cin >> n >> x;
	pair<int,long int> arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
    sort(arr,arr+n);
    int i = 0;
    while (arr[i].first <= x) {
    	long int tmp = x - arr[i].first;
    	if (Binary_Search(arr,tmp,0,n-1,i) != -1) {
    		cout << arr[i].second << " " << Binary_Search(arr,tmp,0,n-1,i);
    		return 0;
		}
		i++;
	}
	cout << "IMPOSSIBLE";
}
