#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
long long luy_thua_bac4(long N) {
	long long result = 1;
	long long base = 4;
	while (N > 0) {
		if (N % 2 == 1) result = (result * base)%m;
		N/=2;
		base = (base*base)%m;
	}
	return result;
}
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
	long N, L; inFile >> N >> L;
	inFile.close();
	cout << (L*L*(luy_thua_bac4(N+1)-1)*mod_pow(3,m-2,m))%m;
}

