#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n);

    // Đọc dãy a
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sắp xếp dãy a
    sort(a.begin(), a.end());

    // Xử lý từng truy vấn
    while (q--) {
        long long x;
        cin >> x;

        // Tìm vị trí phần tử đầu tiên lớn hơn x
        auto it = upper_bound(a.begin(), a.end(), x);

        if (it == a.begin()) {
            // Nếu không có phần tử nào <= x
            cout << 0 << "\n";
        } else {
            // Trả về chỉ số của phần tử đầu tiên <= x
            cout << (it - a.begin()) << "\n";
        }
    }

    return 0;
}
