#include <iostream>
#define m 1000000007
using namespace std;
long long count_rectangles(int N, int M) {
    long long row_ways = (N * (N + 1)) / 2;
    long long col_ways = (M * (M + 1)) / 2;
    return row_ways * col_ways;
}
int main() {
    int N, M;
    cin >> N >> M;
    cout << count_rectangles(N, M)%m;
    return 0;
}
