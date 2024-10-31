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
    long long a;
    int n;
    cin >> a >> n;
    long long tmp1 = 1, tmp2 = 1;
    for (int i = 1; i <= n; i++) {
        tmp1 = (tmp1 * ((a + i) % m + m) % m) % m;
        tmp2 = (tmp2 * (i % m + m) % m) % m;
    }
    long long tmp2_inv = mod_pow(tmp2, m - 2, m);
    cout << (tmp1 * tmp2_inv) % m << endl;
}