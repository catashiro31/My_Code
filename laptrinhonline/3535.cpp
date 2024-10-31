#include <bits/stdc++.h>
using namespace std;
int Binary_Search(int arr[], int L, int H, int value) {
    if (L >= H - 1) {
        if (arr[H - 1] <= value) return H - 1;
        else return L-1;
    }
    int mid = L + (H - L) / 2;
    if (arr[mid] <= value) {
        return Binary_Search(arr, mid, H, value);
    } else {
        return Binary_Search(arr, L, mid, value);
    }
}

int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int m, n; 
	inFile >> n >> m;
	int A[n]; 
	for (int &x : A) inFile >> x;
	int B[m];
	for (int &x : B) inFile >> x;
	inFile.close();
	sort(A,A+n);
	for (int x : B) {
		cout << Binary_Search(A,0,n,x)+1 << endl;
	}
}
