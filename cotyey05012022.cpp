#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int N; inFile >> N;
	long L; inFile >> L;
	vector<long> arr;
	for (int i = 0; i < N; i++) {
		long tmp; inFile >> tmp;
		arr.push_back(tmp);
	}
	arr.push_back(0);
    inFile.close();
    sort(arr.begin(),arr.end(),greater<long> ());
    int i = 0;
    while (i < N) {
    	if (L <= (arr[i]-arr[i+1])*(i+1)) {
    		if (L%(i+1) == 0) cout << arr[i]-(L/(i+1));
    		else cout << arr[i]-(L/(i+1))-1;
    		break;
		} else {
			L -= (arr[i]-arr[i+1])*(i+1);
			i++;
		}
	}
}
