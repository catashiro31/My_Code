#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
int main() {
	ifstream inFile ("C:/Users/Actama/Documents/C++/input.txt");
	int t; inFile >> t;
	long long A[t];
	for (long long &x : A) inFile >> x;
	inFile.close();
	for (int i = 0; i < t; i++) {
		long long kq = 1;
		for (int j = 0; j <= 2; j++) {
			kq = (kq*((A[i]+j)%m))%m;
		}
		kq = (kq*(mod_pow(6,m-2,m)))%m;
		cout << kq << endl;
	}
}
