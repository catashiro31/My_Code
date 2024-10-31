#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int n; inFile >> n;
	pair<long,int> a[n];
	for (int i = 0; i < n; i++) {
		inFile >> a[i].first;
		a[i].second = i;
	}
	inFile.close();
	sort(a,a+n);
	vector<bool> check1(n,true);
	int kq1 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].second == i) check1[i] = false;
		int ccount = 0;
		int pos = i;
		while (true) {
			if (check1[pos] == true) {
				check1[pos] = false;
				ccount++;
			}
			else break;
			pos = a[pos].second; 
		}
		if (ccount != 0) kq1 += ccount-1;
	}
	sort(a, a + n, [](const pair<int, int>& k1, const pair<int, int>& k2) {
        return k1.first > k2.first; 
    });
	vector<bool> check2(n,true);
	int kq2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].second == i) check2[i] = false;
		int ccount = 0;
		int pos = i;
		while (true) {
			if (check2[pos] == true) {
				check2[pos] = false;
				ccount++;
			}
			else break;
			pos = a[pos].second; 
		}
		if (ccount != 0) kq2 += ccount-1;
	}
	cout << min(kq1,kq2);
}
