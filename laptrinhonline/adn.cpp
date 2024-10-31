#include <bits/stdc++.h>
using namespace std;
int N;
string dad, mom;
string chil = "";
vector<string> kq;
void Try(int i) {
	if (i == N) kq.push_back(chil);
	else {
		if (dad[i] == mom[i]) {
			chil += dad[i];
			Try(i+1);
			chil.pop_back();
		}
		else {
			if (dad[i] < mom[i]) {
				chil += dad[i];
				Try(i+1);
				chil.pop_back();
				chil += mom[i];
				Try(i+1);
				chil.pop_back();
			} else {
				chil += mom[i];
				Try(i+1);
				chil.pop_back();
				chil += dad[i];
				Try(i+1);
				chil.pop_back();
			}
		}
	}
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	inFile >> N;
	inFile >> dad >> mom;
	inFile.close();
	Try(0);
	cout << kq.size() << endl;
	for (string x : kq) cout << x << endl; 
}
