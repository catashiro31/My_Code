#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	float A, B, C;
	inFile >> A >> B >> C;
    inFile.close();
    if (A >= B+C or B >= A+C or C >= A+B) cout << "KHONG PHAI TAM GIAC" << endl;
    else {
    	if (pow(A,2) > pow(B,2)+pow(C,2) or pow(B,2) > pow(A,2)+pow(C,2) or pow(C,2) > pow(B,2)+pow(A,2)) {
    		cout << "TAM GIAC TU" << endl;
    		if (A == B or B == C or A == C) cout << "TAM GIAC CAN" << endl;
		} else if (pow(A,2) == pow(B,2)+pow(C,2) or pow(B,2) == pow(A,2)+pow(C,2) or pow(C,2) == pow(B,2)+pow(A,2)) {
			cout << "TAM GIAC VUONG" << endl;
			if (A == B or B == C or A == C) cout << "TAM GIAC CAN" << endl;
		} else {
			cout << "TAM GIAC NHON" << endl;
			if (A == B and B == C) cout << "TAM GIAC DEU" << endl;
			else if (A == B or B == C or A == C) cout << "TAM GIAC CAN" << endl;
		}
	}
}
