#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool isPrime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n; cin >> n;
	vector<long long> GCD;
	int limit = sqrt(n);
	for (long long i = 2; i <= limit; i++) {	
		if (n % i == 0) {
			GCD.push_back(i);
			if (n/i != i) GCD.push_back(n/i);
		}
	}
	
	if (GCD.size() != 0){
		int kq = 2;
		for (long long x : GCD) {
			if (!isPrime(x)) kq++;
		}
		cout << kq;
	} else cout << 1;
}
