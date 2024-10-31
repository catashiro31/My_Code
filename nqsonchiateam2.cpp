#include <bits/stdc++.h>
using namespace std;
void kq(int cmin, int cmax, int L, int H, int &index) {
	int M = (H+L)/2;
	int NY = pow((M-cmin+1),2)*(M+cmin)/2;
	int NM = pow((cmax-M),2)*(cmax+M+1)/2;
	if (L == H) {
		if (NY >= NM) {
			index = min(index,(M-cmin+1));
		} 
		return;
	} else {
		if (NY < NM) return kq(cmin,cmax,M+1,H,index);
		else {
			index = min(index,(M-cmin+1));
			return kq(cmin,cmax,L,M,index);
		}
	}
}
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int t;
	inFile >> t;
	pair<int,int> arr[t];
	for (int i = 0; i < t; i++) inFile >> arr[i].first >> arr[i].second;
    inFile.close();
    vector<int> output;
    for (int i = 0; i < t; i++) {
    	int index = INT_MAX;
    	int cmin = arr[i].first;
    	int cmax = arr[i].first+arr[i].second-1;
    	kq(cmin,cmax,cmin,cmax,index);
    	output.push_back(index);
	}
	for (int i = 0; i < t; i++) {
		if (i < t-1) cout << output[i] << endl;
		else cout << output[i];
	}
}
