#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
long mod_pow(long long exp) {
	long result = 1;
	long base = 3;
	while (exp != 0) {
		if (exp%2 == 1) result = (result*base)%m;
		base = (base*base)%m;
		exp /= 2;
	}
	return result;
}
int main() {
	ifstream inFile("C:/Users/Actama/Documents/C++/input.txt");
	long long n;
	inFile >> n;
    inFile.close();
    if (n == 1) cout << 1;
    else if (n == 2) cout << 2;
    else if (n == 3) cout << 3;
    else {
    	if (n % 3 == 0) cout << mod_pow(n/3);
		else if (n % 3 == 1) cout << (mod_pow((n-4)/3)*4)%m;
		else cout << (mod_pow((n-2)/3)*2)%m; 
	}
}
