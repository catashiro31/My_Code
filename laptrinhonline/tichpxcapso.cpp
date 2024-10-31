#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; 
    cin >> n;
    long M; 
    cin >> M;
    vector<long> a(n);
    for (long &x : a) cin >> x;
    sort(a.begin(), a.end());
    long kq = 0;
    for (int i = 0; i < n; i++) {
        long tmp = M - a[i];
        auto it = upper_bound(a.begin() + i + 1, a.end(), tmp);
        kq += (it - a.begin() - (i + 1));
    }
    cout << kq;
    cerr << "\nTime elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
}
