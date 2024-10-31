#include <iostream>
using namespace std;
long long countBits(long long n) {
    long long result = 0;
    for (int i = 0; (1LL << i) <= n; i++) {
        long long block_size = 1LL << (i + 1);
        long long full_blocks = n / block_size;
        long long remaining = n % block_size;
        result += full_blocks * (1LL << i);
        if (remaining >= (1LL << i)) {
            result += remaining - (1LL << i) + 1;
        }
    }
    return result;
}
int main() {
    long long n;
    cin >> n;
    cout << countBits(n);
    return 0;
}
