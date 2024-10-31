#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	long N; inFile >> N;
	inFile.close();
	vector<bool> csnt(sqrt(N)+1,true);
	csnt[0] = false;
	csnt[1] = false;
	vector<int> snt;
	for (int i = 2; i < sqrt(N)+1; i++) {
		if (csnt[i] == true) {
			snt.push_back(i);
			for (int j = i*i; j < sqrt(N)+1; j+=i) csnt[j] = false;
		}
	}
	int i = 0;
	int kq = 0;
	while (i < snt.size() and N != 1) {
		if (N%snt[i] == 0) {
			N /= snt[i];
			kq++;
		} else i++;
	}
	if (N == 1) cout << kq;
	else cout << kq+1;
}
