#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	long long n; inFile >> n;
	inFile.close();
	vector<long long> snt;
	while (n % 2 == 0) {
		snt.push_back(2);
		n /= 2;
	}
	if (n > 2) {
		for (long long i = 3; i <= sqrt(n); i+=2) {
			while (n % i == 0) {
				snt.push_back(i);
				n /= i;
			}
		}
	}	
	if (n > 2) snt.push_back(n);
	vector<int> kq;
	int tmp = 1;
	for (int i = 1; i < snt.size(); i++) {
		if (snt[i-1] == snt[i]) tmp++;
		else {
			kq.push_back(tmp);
			tmp = 1;
		}
	}   
	int ans = 0;
	if (tmp != 0) kq.push_back(tmp);
	sort(kq.begin(),kq.end());
	if (kq[kq.size()/2] > 1) {
		for (int x : kq) ans += abs(kq[kq.size()/2]-x);
		cout << ans;
	} else {
		for (int x : kq) ans += abs(2-x);
		cout << ans;
	}
}
