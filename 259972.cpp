#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	string n;
	inFile >> n;
    inFile.close();
    for (int i = 1; i < n.length(); i++) {
    	if (n[i-1]<n[i]) {
    		string kq1 = "", kq2 = "";
    		for (int j = 0; j < n.length();j++) {
				kq1 += char(n[0]+1);
				kq2 += n[0];
			}
    		cout << kq1 << endl << kq2;
    		return 0;
		} else if (n[i-1]>n[i]) {
			string kq1 = "", kq2 = "";
			if (n[0] != '1') {
				for (int j = 0; j < n.length(); j++) {
					kq1 += char(n[0]-1);
					kq2 += n[0];
				}
				cout << kq2 << endl << kq1;
			} else {
				for (int j = 0; j < n.length()-1; j++) {
					kq1 += "1";
					kq2 += "9";
				}
				cout << kq1+"1" << endl << kq2;
			}
			return 0;
		}
	}
	cout << n << endl << n;
}
