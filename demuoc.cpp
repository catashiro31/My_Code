#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int T; 
	inFile >> T;
	long long A[T];
	for (int i = 0; i < T; i++) inFile >> A[i];
    inFile.close();
    for (int i = 0; i < T; i++) {
    	long long kq = A[i]/3 + A[i]/5 + A[i]/7 - A[i]/15 - A[i]/21 - A[i]/35 + A[i]/105;
    	cout << kq << endl;
	}
}
