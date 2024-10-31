#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	string ans, input;
	inFile >> ans >> input; 
    inFile.close();
    int nub = 0;
    for (int i = 0; i < ans.length(); i++) {
    	if (ans[i] == input[i]) nub++; 
	}
	float kq = (float)nub/ans.length();
	kq = round(kq*100)/10;
	cout << kq;
}
