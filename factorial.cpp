#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	int n;
	inFile >> n;
    inFile.close();
    long kq = 1;
    for (int i = 1; i <= n; i++) kq*=i;
    cout << kq;
}
