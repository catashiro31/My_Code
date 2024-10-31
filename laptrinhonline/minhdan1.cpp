#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> kq;
int ccount[3] = {0,0,0};
void Try(int i) {
	if (i == N) {
		for (int x : kq) cout << x;
		cout << endl;
		return;
	}
	if (ccount[0] < N/3) {
		ccount[0]++;
		kq.push_back(0);
		Try(i+1);
		kq.pop_back();
		ccount[0]--;
	}
	if (ccount[1] < N/3) {
		ccount[1]++;
		kq.push_back(1);
		Try(i+1);
		kq.pop_back();
		ccount[1]--;
	}
	if (ccount[2] < N/3) {
		ccount[2]++;
		kq.push_back(2);
		Try(i+1);
		kq.pop_back();
		ccount[2]--;
	}
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	inFile >> N;
	inFile.close();
	if (N%3 != 0) cout << -1;
	else {
		Try(0);
	}
}
